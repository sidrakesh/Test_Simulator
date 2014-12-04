#pragma once
#include "iostream"
#include "QuestionDetails.h"
#include "StudentRecords.h"
#include "fstream"
#include "msclr/marshal.h"
#include "msclr/marshal_cppstd.h"
#include "sstream"

namespace Assignment5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
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
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected: 
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(119, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(546, 143);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(119, 183);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(545, 73);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(119, 284);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(545, 73);
			this->richTextBox3->TabIndex = 2;
			this->richTextBox3->Text = L"";
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(119, 489);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(545, 73);
			this->richTextBox4->TabIndex = 4;
			this->richTextBox4->Text = L"";
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(119, 388);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(545, 73);
			this->richTextBox5->TabIndex = 3;
			this->richTextBox5->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Question : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 186);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Option 1 : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 287);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Option 2 : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 391);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Option 3 : ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(35, 492);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Option 4 : ";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"1", L"2", L"3", L"4"});
			this->comboBox1->Location = System::Drawing::Point(119, 595);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(70, 21);
			this->comboBox1->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(35, 598);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Correct Option : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(35, 643);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Marks : ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(119, 640);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(70, 20);
			this->textBox1->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(267, 651);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 44);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Add Question";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form4::button1_Click);
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(724, 359);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Form4";
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 QuestionDetails Question;
				 msclr::interop::marshal_context context;
				 string s;
				 char str[500];
				 s = context.marshal_as<std::string>(richTextBox1->Text);
				 StringToChar(str,s);
				 Question.SetQuestion(str);
				 s = context.marshal_as<std::string>(richTextBox2->Text);
				 StringToChar(str,s);
				 Question.SetOption1(str);
				 s = context.marshal_as<std::string>(richTextBox3->Text);
				 StringToChar(str,s);
				 Question.SetOption2(str);
				 s = context.marshal_as<std::string>(richTextBox4->Text);
				 StringToChar(str,s);
				 Question.SetOption3(str);
				 s = context.marshal_as<std::string>(richTextBox5->Text);
				 StringToChar(str,s);
				 Question.SetOption4(str);

				 Question.SetAnswer(comboBox1->SelectedIndex+1);
				 Question.SetMarks(Convert::ToInt32(textBox1->Text));

				 ofstream outfile;
				 ifstream infile;
				 int QuestionsNumber;

				 infile.open("QuestionsNumber.dat");
				 infile>>QuestionsNumber;
				 infile.close();

				 QuestionsNumber++;
				 remove("QuestionsNumber.dat");
				 outfile.open("QuestionsNumber.dat");
				 outfile<<QuestionsNumber;
				 outfile.close();
				 
				 std::ostringstream ostr;
				 ostr << QuestionsNumber;
				 outfile.open(ostr.str(),ios::out);
				 outfile.write((char*)&Question,sizeof(QuestionDetails));
				 outfile.close();

				 Form4::Close();
			 }
private: void StringToChar(char* str,string s)
		 {
			int i;
			for(i=0;i<(int)s.length();i++)
				str[i] = s[i];
			str[i] = '\0';
		 }
private: System::Void Form4_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
