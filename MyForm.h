

#pragma once
#include"Header.h"
#include"update.h"
#include<string.h>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
namespace Project2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;
	using namespace System::IO;
	/// <summary>
	/// Summary for MyForm

		/// </summary>
	bplustree b;
	patient s, s2;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		int flags = 1;
	private: System::Windows::Forms::SaveFileDialog^ savefd;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListView^ display;
	private: System::Windows::Forms::ColumnHeader^ displaypid;
	private: System::Windows::Forms::ColumnHeader^ displayname;
	private: System::Windows::Forms::ColumnHeader^ displaydescription;
	private: System::Windows::Forms::ColumnHeader^ displayphone_no;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ListBox^ Search_display;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button2;
	public:
	public:
		String^ filename = "";
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ pid;
	private: System::Windows::Forms::Button^ insert;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ updateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addTreeToolStripMenuItem;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ name;

	private: System::Windows::Forms::TextBox^ description;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ phone_no;
	private: System::Windows::Forms::TextBox^ spid;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::OpenFileDialog^ openFD;
	private: System::Windows::Forms::Button^ button1;

	private:
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pid = (gcnew System::Windows::Forms::TextBox());
			this->insert = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addTreeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->description = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->phone_no = (gcnew System::Windows::Forms::TextBox());
			this->spid = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->openFD = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->savefd = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->display = (gcnew System::Windows::Forms::ListView());
			this->displaypid = (gcnew System::Windows::Forms::ColumnHeader());
			this->displayname = (gcnew System::Windows::Forms::ColumnHeader());
			this->displaydescription = (gcnew System::Windows::Forms::ColumnHeader());
			this->displayphone_no = (gcnew System::Windows::Forms::ColumnHeader());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Search_display = (gcnew System::Windows::Forms::ListBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pid
			// 
			this->pid->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pid->Location = System::Drawing::Point(26, 131);
			this->pid->Margin = System::Windows::Forms::Padding(4);
			this->pid->Name = L"pid";
			this->pid->Size = System::Drawing::Size(85, 55);
			this->pid->TabIndex = 0;
			// 
			// insert
			// 
			this->insert->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->insert->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 14.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insert->ForeColor = System::Drawing::Color::White;
			this->insert->Location = System::Drawing::Point(809, 73);
			this->insert->Margin = System::Windows::Forms::Padding(4);
			this->insert->Name = L"insert";
			this->insert->Size = System::Drawing::Size(188, 52);
			this->insert->TabIndex = 1;
			this->insert->Text = L"Insert";
			this->insert->UseVisualStyleBackColor = false;
			this->insert->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(40, 40);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(9, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(1366, 60);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(86, 54);
			this->fileToolStripMenuItem->Text = L"File";
			this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fileToolStripMenuItem_Click);
			// 
			
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->BackColor = System::Drawing::Color::Silver;
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(248, 54);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->BackColor = System::Drawing::Color::Silver;
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(248, 54);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->BackColor = System::Drawing::Color::Silver;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(248, 54);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->updateToolStripMenuItem,
					 this->addTreeToolStripMenuItem
			});
			this->editToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(91, 54);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// updateToolStripMenuItem
			// 
			this->updateToolStripMenuItem->BackColor = System::Drawing::Color::Silver;
			this->updateToolStripMenuItem->Name = L"updateToolStripMenuItem";
			this->updateToolStripMenuItem->Size = System::Drawing::Size(300, 54);
			this->updateToolStripMenuItem->Text = L"Update ";
			this->updateToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::updateToolStripMenuItem_Click);
			// 
			
			// addTreeToolStripMenuItem
			// 
			this->addTreeToolStripMenuItem->BackColor = System::Drawing::Color::Silver;
			this->addTreeToolStripMenuItem->Name = L"addTreeToolStripMenuItem";
			this->addTreeToolStripMenuItem->Size = System::Drawing::Size(300, 54);
			this->addTreeToolStripMenuItem->Text = L"Add Tree";
			this->addTreeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addTreeToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 14.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 68);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 54);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Pid";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 14.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(163, 69);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 54);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Name";
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(166, 131);
			this->name->Margin = System::Windows::Forms::Padding(4);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(138, 55);
			this->name->TabIndex = 6;
			// 
			// description
			// 
			this->description->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description->Location = System::Drawing::Point(347, 131);
			this->description->Margin = System::Windows::Forms::Padding(4);
			this->description->Name = L"description";
			this->description->Size = System::Drawing::Size(153, 55);
			this->description->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 14.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(348, 69);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(302, 54);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Description";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 14.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(555, 72);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(256, 54);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Phone_no";
			// 
			// phone_no
			// 
			this->phone_no->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone_no->Location = System::Drawing::Point(564, 131);
			this->phone_no->Margin = System::Windows::Forms::Padding(4);
			this->phone_no->Name = L"phone_no";
			this->phone_no->Size = System::Drawing::Size(150, 55);
			this->phone_no->TabIndex = 11;
			// 
			// spid
			// 
			this->spid->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spid->Location = System::Drawing::Point(62, 433);
			this->spid->Margin = System::Windows::Forms::Padding(4);
			this->spid->Name = L"spid";
			this->spid->Size = System::Drawing::Size(128, 39);
			this->spid->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(44, 490);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(417, 34);
			this->label5->TabIndex = 13;
			this->label5->Text = L"(Enter the PID to be search)";
			// 
			// openFD
			// 
			this->openFD->FileName = L"openFileDialog";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(220, 429);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 53);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::search);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 15.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(34, 270);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 61);
			this->label8->TabIndex = 18;
			// 
			// display
			// 
			this->display->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->display->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->displaypid, this->displayname,
					this->displaydescription, this->displayphone_no
			});
			this->display->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 15.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->display->HideSelection = false;
			this->display->Location = System::Drawing::Point(21, 215);
			this->display->Margin = System::Windows::Forms::Padding(4);
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(1325, 190);
			this->display->TabIndex = 20;
			this->display->UseCompatibleStateImageBehavior = false;
			this->display->View = System::Windows::Forms::View::Details;
			// 
			// displaypid
			// 
			this->displaypid->Text = L"PID";
			this->displaypid->Width = 200;
			// 
			// displayname
			// 
			this->displayname->Text = L"NAME";
			this->displayname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->displayname->Width = 354;
			// 
			// displaydescription
			// 
			this->displaydescription->Text = L"DESCRIPTION";
			this->displaydescription->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->displaydescription->Width = 276;
			// 
			// displayphone_no
			// 
			this->displayphone_no->Text = L"PHONE_NO";
			this->displayphone_no->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->displayphone_no->Width = 519;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Cornsilk;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(38, 542);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 33);
			this->label7->TabIndex = 23;
			// 
			// Search_display
			// 
			this->Search_display->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Search_display->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search_display->FormattingEnabled = true;
			this->Search_display->ItemHeight = 45;
			this->Search_display->Location = System::Drawing::Point(475, 430);
			this->Search_display->Margin = System::Windows::Forms::Padding(4);
			this->Search_display->Name = L"Search_display";
			this->Search_display->Size = System::Drawing::Size(878, 94);
			this->Search_display->TabIndex = 24;
			this->Search_display->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::sdisplay_SelectedIndexChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 14.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(809, 132);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 52);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Refresh";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(22, 46);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1366, 539);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Search_display);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->display);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->spid);
			this->Controls->Add(this->phone_no);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->description);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->insert);
			this->Controls->Add(this->pid);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1398, 627);
			this->MinimumSize = System::Drawing::Size(1398, 627);
			this->Name = L"MyForm";
			this->Text = L"Hospital  Management System";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (pid->Text == "" || name->Text == "" || description->Text == "" || phone_no->Text == "")
		{
			MessageBox::Show("Enter Value Please.", "Error");
		}
		else
		{
			msclr::interop::marshal_context con;
			s.pid = con.marshal_as< std::string >(pid->Text);
			s.name = con.marshal_as<std::string>(name->Text);
			s.description = con.marshal_as<std::string>(description->Text);
			s.phone_no = con.marshal_as<std::string>(phone_no->Text);
			b.insert(s);
			if (b.ds != 0) {
				label7->Text = gcnew String(b.st[0].c_str());
				pid->Text = ""; name->Text = ""; description->Text = "";
				phone_no->Text = "";
				return;
			}
			flags = 0;
			pid->Text = ""; name->Text = ""; description->Text = ""; phone_no->Text = "";
		}
	}
	private: System::Void fileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		openFD->Filter = "rft files (*.rft)|*.rft";
		openFD->FileName = "";
		openFD->ShowDialog();
		if (openFD->FileName == "")
			return;
		filename = openFD->FileName;
		this->Text = filename;
		msclr::interop::marshal_context con;
		string s = con.marshal_as<std::string>(filename);
		cout << s << endl;
		b = bplustree();
		if (b.head == NULL) {
			cout << "new";
		}
		for (int i = 0; i < 1000; i++) {
			b.st[i] = "";
		}
		b.ds = 0;
		StreamReader^ r = File::OpenText(filename);
		int x = 0;
		String^ line;
		while ((line = r->ReadLine()) != nullptr) {
			b.st[x++] = con.marshal_as<std::string>(line);
		}
		cout << x << endl;
		b.ds = x;
		b.read();
		r->Close();
	}

	private: System::Void contentDisplayToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (b.head == NULL)
		{
			MessageBox::Show("NO Value Inserted", "Error");
			return;
		}
		display->Items->Clear();
		for (int i = 0; i < 1000; i++) {
			b.st[i] = "";
		}
		b.ds = 0;
		b.display();
		for (int i = 0; i < b.ds; i++) {
			String^ s = gcnew String((b.sd[i].pid).c_str());
			ListViewItem^ dis = gcnew ListViewItem(s);
			dis->SubItems->Add(gcnew String((b.sd[i].name).c_str()));
			dis->SubItems->Add(gcnew String((b.sd[i].description).c_str()));
			dis->SubItems->Add(gcnew String((b.sd[i].phone_no).c_str()));
			display->Items->Add(dis);
		}
		label7->Text = "";
	}
	private: System::Void search(System::Object^ sender, System::EventArgs^ e) {
		Search_display->Items->Clear();
		label7->Text = "";
		for (int i = 0; i < 1000; i++) {
			b.st[i] = "";
		}
		b.ds = 0;
		if (spid->Text == "")

		{
			MessageBox::Show("Enter Value Please.", "Error");
		}
		else
		{
			msclr::interop::marshal_context con;
			s.pid = con.marshal_as<std::string>(spid->Text);
			cout << s.pid << endl;
			s.name = "";
			s.description = "";
			s.phone_no = "";
			b.search(s);
			if (b.flag == 0) {
				label7->Text = gcnew String(b.st[0].c_str());
				return;
			}
			for (int i = 0; i < b.ds; i++) {
				String^ s = "The result for search is :-";
				Search_display->Items->Add(s);
				s = "\t\tPID:-" + gcnew String((b.sd[i].pid).c_str());
				Search_display->Items->Add(s);
				s = "\t\tName:-" + gcnew String((b.sd[i].name).c_str());
				Search_display->Items->Add(s);
				s = "\t\tDescription:-" + gcnew String((b.sd[i].description).c_str());
				Search_display->Items->Add(s);
				s = "\t\tPhone_no:-" + gcnew String((b.sd[i].phone_no).c_str());
				Search_display->Items->Add(s);
			}
			b.ds = 0;
			spid->Text = "";
		}
	}


	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (flags != 1) {
			if (filename == "") {
				savefd->FileName = "";
				savefd->ShowDialog();
				if (savefd->FileName == "")
					return;
				filename = savefd->FileName;
				this->Text = filename;
				StreamWriter^ outp = File::CreateText(filename);
				b.write();
				for (int i = 0; i < b.ds; i++) {
					String^ stud = gcnew String(b.st[i].c_str());
					cout << b.st[i];
					outp->WriteLine(stud);
				}
				flags = 1;
				outp->Close();
			}
			else {
				StreamWriter^ out = File::CreateText(filename);
				b.write();
				for (int i = 0; i < b.ds; i++) {
					String^ stud = gcnew String(b.st[i].c_str());
					cout << b.st[i];
					out->WriteLine(stud);

				}
				out->Close();
				flags = 1;
			}
		}
	}

	private: System::Void MyForm_FormClosing(System::Object^ sender,System::Windows::Forms::FormClosingEventArgs^ e) {
		if (flags != 1) {
			System::Windows::Forms::DialogResult r;
			r = MessageBox::Show("Do you really want to close the program without saving ? ", "project", MessageBoxButtons::YesNoCancel);
			if (r == System::Windows::Forms::DialogResult::Yes) {
			}
			else if (r == System::Windows::Forms::DialogResult::No) {
				if (filename == "") {
					savefd->FileName = "*.rft";
					savefd->ShowDialog();
					if (savefd->FileName == "")
						return;
					filename = savefd->FileName;
					this->Text = filename;
					StreamWriter^ outp = File::CreateText(filename);
					b.write();
					for (int i = 0; i < b.ds; i++) {
						String^ stud = gcnew String(b.st[i].c_str());
						cout << b.st[i];
						outp->WriteLine(stud);
					}
					outp->Close();
					flags = 1;
				}
				else {
					StreamWriter^ out = File::CreateText(filename);
					b.write();
					for (int i = 0; i < b.ds; i++) {
						String^ stud = gcnew String(b.st[i].c_str());
						cout << b.st[i];
						out->WriteLine(stud);
					}
					out->Close();
					flags = 1;
				}
			}
			else {
				e->Cancel = true;
			}
		}
	}

	private: System::Void addTreeToolStripMenuItem_Click(System::Object^ sender,
		System::EventArgs^ e) {
		openFD->Filter = "rft files (*.rft)|*.rft";
		openFD->FileName = "";
		openFD->ShowDialog();
		if (openFD->FileName == "")
			return;
		String^ filename1 = openFD->FileName;
		msclr::interop::marshal_context con;
		string s = con.marshal_as<std::string>(filename1);
		cout << s << endl;
		for (int i = 0; i < 1000; i++) {
			b.st[i] = "";
		}
		StreamReader^ r = File::OpenText(filename1);
		int x = 0;
		String^ line;
		while ((line = r->ReadLine()) != nullptr) {
			b.st[x++] = con.marshal_as<std::string>(line);
		}
		b.ds = x;
		b.read();
		r->Close();
	}
	
	private: System::Void updateToolStripMenuItem_Click(System::Object^ sender,
		System::EventArgs^ e) {

		if (pid->Text == "" || name->Text == "" || description->Text == "" || phone_no->Text == "")
		{
			MessageBox::Show("Enter Value Please.", "Error");
		}
		else
		{
			msclr::interop::marshal_context con;
			s.pid = con.marshal_as< std::string >(pid->Text);
			s.name = con.marshal_as<std::string>(name->Text);
			s.description = con.marshal_as<std::string>(description->Text);
			s.phone_no = con.marshal_as<std::string>(phone_no->Text);
			pid->Text = ""; name->Text = ""; description->Text = ""; phone_no->Text =
				"";
			Project2::MyForm1 f;
			f.ShowDialog();
			StreamReader^ r = File::OpenText("project.txt");
			s2.pid = con.marshal_as< std::string >(r->ReadLine());
			b = b.update(s2, s);
			if (b.ds != 0) {
				label7->Text = gcnew String(b.st[0].c_str());
				return;
			}
			r->Close();
			flags = 0;
		}
	}
	
	private: System::Void sdisplay_SelectedIndexChanged(System::Object^ sender,
		System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (b.head == NULL)
		{
			MessageBox::Show("NO Value Inserted", "Error");
			return;
		}
		display->Items->Clear();
		for (int i = 0; i < 1000; i++) {
			b.st[i] = "";
		}
		b.ds = 0;
		b.display();
		for (int i = 0; i < b.ds; i++) {
			String^ s = gcnew String((b.sd[i].pid).c_str());
			ListViewItem^ dis = gcnew ListViewItem(s);
			dis->SubItems->Add(gcnew String((b.sd[i].name).c_str()));
			dis->SubItems->Add(gcnew String((b.sd[i].description).c_str()));
			dis->SubItems->Add(gcnew String((b.sd[i].phone_no).c_str()));
			display->Items->Add(dis);
		}
		label7->Text = "";
	}
};
}