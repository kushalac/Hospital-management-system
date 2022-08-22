#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include <vector> 
#include <algorithm>
using namespace std;
int case_insensitive_match(string s1, string s2)
{
	//convert s1 and s2 into lower case strings
	transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
	transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
	cout << s1 << "\t" << s2 << endl;
	if (s1.compare(s2) == 0)
		return 1; //The strings are same
	return 0; //not matched
}
vector<string> splitStrings(string str, char dl)
{
	string word = "";
	int num = 0;
	str = str + dl;
	int l = str.size();
	vector<string> substr_list;
	for (int i = 0; i < l; i++) {
		if (str[i] != dl)
			word = word + str[i];
		else {
			if ((int)word.size() != 0)
				substr_list.push_back(word);
			word = "";
		}
	}
	return substr_list;
}
class patient
{
public:
	string pid;
	string name;
	string description;
	string phone_no;
	string Buf;
	char buf[100];
};
istream& operator >> (istream& in, patient& s)
{
	cout << "Enter pid:-";
	in >> s.pid;
	cout << "Enter name:-";
	in >> s.name;
	cout << "Enter description:-";
	in >> s.description;
	cout << "Enter phone_no:-";
	in >> s.phone_no;
	return in;
}
ostream& operator << (ostream& out, patient& s)
{
	out << s.pid << "\t" << s.name << "\t" << s.description << "\t" << s.phone_no << "\t";
	return out;
}
class node
{
public:
	patient value[4];
	node* child[4];
	node* next, * per;
	node* parent;
	int size;
	node();
};
class bplustree
{
public:
	node* head;
	int flag, flage, ds;
	string st[1000];
	patient sd[1000];
	void insert(patient key);
	void search(patient key);
	bplustree update(patient key, patient key2);
	void tree_view(node* n);
	void write();
	void read();
	void display();
	bplustree();
private:
	node* split(node* n);
	node* tchilds(node* n);
	node* findlevel(patient key, node* n);
};
node::node() {
	size = 4;
	for (int i = 0; i < size; i++) {
		value[i].pid = "";
		value[i].name = "";
		value[i].description = "";
		value[i].phone_no = "";
		child[i] = NULL;
	}
	size = 0;
	next = NULL;
	per = NULL;
	parent = NULL;
}
bplustree::bplustree() {
	head = NULL;
	flag = 0;
	flage = 0;
}
void bplustree::insert(patient key) {
	ds = 0;
	transform(key.pid.begin(), key.pid.end(), key.pid.begin(), ::toupper);
	cout << key.pid << endl;
	if (head == NULL) {
		head = new node;
		head->value[head->size] = key;
		head->size++;
		return;
	}
	node* n = findlevel(key, head);
	int i;
	for (i = 0; i < n->size; i++) {
		if (case_insensitive_match(key.pid, n->value[i].pid)) {
			st[ds++] = "already exits";
			return;

		}
		if (key.pid < n->value[i].pid) {
			break;
		}
	}
	if (i == n->size) {
		n->value[i] = key;
		n->size++;
	}
	else {
		patient temp;
		for (; i < n->size; i++) {
			temp = n->value[i];
			n->value[i] = key;
			key = temp;
		}
		n->value[i] = key;
		n->size++;
	}
	if (n->size > 3) {
		node* x = split(n);
	}
	return;
}
node* bplustree::findlevel(patient key, node* n) {
	node* ptr = n;
	int i;
	for (i = 0; i < ptr->size; i++) {
		if (key.pid < ptr->value[i].pid) {
			if (ptr->child[i] != NULL) {
				return(findlevel(key, ptr->child[i]));
			}
			else {
				return ptr;
			}
		}
	}
	if (i == ptr->size && key.pid > ptr->value[i].pid) {
		if (ptr->child[i] != NULL) {
			return(findlevel(key, ptr->child[i]));
		}
		else
		{
			return ptr;
		}
	}
	return ptr;
}

bplustree bplustree::update(patient key, patient key2) {
	transform(key.pid.begin(), key.pid.end(), key.pid.begin(), ::toupper);
	transform(key2.pid.begin(), key2.pid.end(), key2.pid.begin(), ::toupper);
	node* n = head;
	int x = 0;
	bplustree b;
	b.ds = 0;
	flage = 0;
	patient a[1000];
	while (n->child[0] != NULL) {
		n = n->child[0];
	}
	while (n != NULL) {
		for (int i = 0; i < n->size; i++) {
			if ((case_insensitive_match(key.pid, n->value[i].pid)) == 0)
				a[x++] = n->value[i];
			else
			{

				a[x++] = key2;
				flage = 1;
			}
		}
		n = n->next;
	}
	if (flage == 0) {
		b.st[0] = "element not found\n";
		b.ds++;
		b.head = head;
		return b;
	}
	for (int i = 0; i <= x; i++) {
		b.insert(a[i]);
		b.flage = 1;
	}
	n = b.head;
	while (n->child[0] != NULL) {
		n = n->child[0];
	}
	for (int i = 0; i < n->size; i++)
		cout << n->value[i];
	return b;
}
node* bplustree::split(node* n) {
	int m = (n->size / 2);
	int x = 0;
	node* ptr;
	if (n->parent == NULL) {
		head = new node;
		ptr = head;
		ptr->value[x] = n->value[m];
		ptr->size++;
	}
	else {
		ptr = n->parent;
		for (x = 0; x < ptr->size; x++) {
			if (n->value[m].pid < ptr->value[x].pid) {
				break;
			}
		}
		patient temp = n->value[m];
		patient temp2;
		node* ad1, * ad2;
		ad1 = ptr->child[x];
		int y = x;
		for (; x < ptr->size; x++) {
			temp2 = ptr->value[x];
			ptr->value[x] = temp;
			temp = temp2;
			ad2 = ptr->child[x + 1];
			ptr->child[x + 1] = ad1;
			ad1 = ad2;
		}
		ptr->value[x] = temp;
		ptr->child[x + 1] = ad1;
		x = y;
		ptr->size++;
	}
	node* c1 = new node;
	node* c2 = new node;
	ptr->child[x] = c1;
	ptr->child[x + 1] = c2;
	c1->next = c2;
	c2->per = c1;
	if (x != 0) {
		if (ptr->child[x - 1] != NULL) {

			ptr->child[x - 1]->next = c1;
			c1->per = ptr->child[x - 1];
		}
	}
	if (ptr->child[x + 2] != NULL) {
		c2->next = ptr->child[x + 2];
		ptr->child[x + 2]->per = c2;
	}
	if (n->child[0] == NULL) {
		for (int i = 0; i < m; i++) {
			c1->value[i] = n->value[i];
			c1->size++;
		}
		for (int i = m, x = 0; i < n->size; i++, x++) {
			c2->value[x] = n->value[i];
			c2->size++;
		}
		if (n->next != NULL) {
			c2->next = n->next;
		}
		if (n->per != NULL)
			n->per->next = c1;
	}
	else {
		c1->child[0] = n->child[0];
		c1->child[0]->parent = c1;
		for (int i = 0; i < m; i++) {
			c1->value[i] = n->value[i];
			c1->child[i + 1] = n->child[i + 1];
			c1->child[i + 1]->parent = c1;
			c1->size++;
		}
		c2->child[0] = n->child[m + 1];

		c2->child[0]->parent = c2;
		for (int i = m + 1, x = 0; i < n->size; i++, x++) {
			c2->value[x] = n->value[i];
			c2->child[x + 1] = n->child[i + 1];
			c2->child[x + 1]->parent = c2;
			c2->size++;
		}
	}
	c1->parent = ptr;
	c2->parent = ptr;
	if (ptr->size > 3) {
		ptr = split(ptr);
	}
	return c2;
}
void bplustree::display() {
	node* n = head;
	ds = 0;
	while (n->child[0] != NULL) {
		n = n->child[0];
	}
	while (n != NULL) {
		for (int i = 0; i < n->size; i++) {
			if (n->value[i].pid == "")
				continue;
			sd[ds++] = n->value[i];
		}
		n = n->next;
	}
	return;
}
void bplustree::search(patient key) {
	transform(key.pid.begin(), key.pid.end(), key.pid.begin(), ::toupper);
	node* ptr = head;
	ds = 0;
	int x = 0;
	flag = 0;
	while (ptr != NULL) {
		if (ptr->child[0] == NULL) {
			for (int i = 0; i < ptr->size; i++) {
				if ((case_insensitive_match(key.pid, ptr->value[i].pid)) == 1)
				{
					transform(key.pid.begin(), key.pid.end(),
						key.pid.begin(), ::toupper);
					cout << key.pid << endl;
					flag = 1;
					sd[ds++] = ptr->value[i];
					return;
				}
			}
			break;
		}
		else
		{
			int i;
			for (i = 0; i < ptr->size; i++) {
				if (key.pid < ptr->value[i].pid) {
					break;
				}
			}
			ptr = ptr->child[i];
			cout << x++ << "\t";

			cout << "->";
		}
	}
	st[0] = "pid not found";
	return;
}
void bplustree::tree_view(node* n) {
	cout << "|";
	for (int i = 0; i < n->size; i++) {
		cout << n->value[i];
	}
	cout << "|" << endl;
	while (n != NULL) {}
}
void bplustree::write() {
	node* n = head;
	ds = 0;
	for (int i = 0; i < 1000; i++)
	{
		st[i] = "";
	}
	while (n->child[0] != NULL) {
		n = n->child[0];
	}
	while (n != NULL) {
		for (int i = 0; i < n->size; i++) {
			if (n->value[i].pid == "")
				continue;
			st[ds++] = n->value[i].pid + "|" + n->value[i].name + "|" + n->value[i].description + "|" + n->value[i].phone_no + "|";
		}
		n = n->next;
	}
	return;
}
void bplustree::read() {
	char dl = '|';
	patient s;
	cout << ds << endl;
	for (int j = 0; j < ds; j++) {
		cout << st[j] << j << endl;
		vector<string> res = splitStrings(st[j], dl);
		s.pid = res[0];
		s.name = res[1];
		s.description = res[2];
		s.phone_no = res[3];
		int temp = ds;
		insert(s);
		ds = temp;
	}
}

