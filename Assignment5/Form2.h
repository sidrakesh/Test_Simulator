#pragma once
#include "msclr/marshal.h"
#include "msclr/marshal_cppstd.h"
#include "fstream"
#include "Form3.h"
#include "QuestionDetails.h"
#include "StudentRecords.h"
#include "sstream"
using namespace std;
namespace Assignment5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;

	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	public:
		System::String^ StudentName;
		System::String^ StudentRollNumber;
	private:
		int QuestionNumber;
		int CurrentQuestion;
		int StudentMarks;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->richTextBox1->Enabled = false;
			this->richTextBox1->Location = System::Drawing::Point(32, 38);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(523, 105);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(32, 149);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(522, 175);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(26, 136);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(85, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(26, 101);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(85, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(26, 67);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(26, 30);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(85, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(479, 338);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(310, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(51, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(206, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Question Number : ";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 373);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Form2";
			this->Text = L"Questions";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
				 StudentMarks=0;
				 QuestionDetails Question;
				 ifstream infile;
				 int b;
				 infile.open("QuestionsNumber.dat",ios::in);
				 infile>>b;
				 infile.close();

				 QuestionNumber = b;
				 CurrentQuestion = 1;
				 textBox1->Text = "1";
				 
				 infile.open("1",ios::in);
				 infile.seekg(0);
				 infile.read((char*)&Question,sizeof(QuestionDetails));
				 infile.close();

				 richTextBox1->Text = gcnew String(reinterpret_cast<const char*>(Question.GetQuestion()));
				 radioButton1->Text = gcnew String(reinterpret_cast<const char*>(Question.GetOption1()));
				 radioButton2->Text = gcnew String(reinterpret_cast<const char*>(Question.GetOption2()));
				 radioButton3->Text = gcnew String(reinterpret_cast<const char*>(Question.GetOption3()));
				 radioButton4->Text = gcnew String(reinterpret_cast<const char*>(Question.GetOption4()));
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 QuestionDetails Question;
				 ifstream infile;

				 std::ostringstream ostr;
				 ostr << CurrentQuestion;
				 infile.open(ostr.str(),ios::in);
				 infile.seekg(0);
				 infile.read((char*)&Question,sizeof(QuestionDetails));
				 infile.close();
			 
				 if(radioButton1->Checked==true&&Question.GetAnswer()==1)
					 {
						 StudentMarks+=Question.GetMarks();			 
					 }
				 else if(radioButton2->Checked==true&&Question.GetAnswer()==2)
					 {
						 StudentMarks+=Question.GetMarks();
					 }
				 else if(radioButton3->Checked==true&&Question.GetAnswer()==3)
					 {
						 StudentMarks+=Question.GetMarks();
					 }
				 else if(radioButton4->Checked==true&&Question.GetAnswer()==4)
					 {
						 StudentMarks+=Question.GetMarks();
					 }
			 
				 CurrentQuestion++;

				 if(CurrentQuestion<QuestionNumber)
				 {
					textBox1->Text = Convert::ToString(CurrentQuestion);
					
					std::ostringstream ostr;
					ostr << CurrentQuestion;
					infile.open(ostr.str(),ios::in);
					infile.seekg(0);
					infile.read((char*)&Question,sizeof(QuestionDetails));
					infile.close();

					richTextBox1->Text = gcnew String(reinterpret_cast<const char*>(Question.GetQuestion()));
					radioButton1->Text = gcnew String(reinterpret_cast<const char*>(Question.GetOption1()));
					radioButton2->Text = gcnew String(reinterpret_cast<const char*>(Question.GetOption2()));
					radioButton3->Text = gcnew String(reinterpret_cast<const char*>(Question.GetOption3()));
					radioButton4->Text = gcnew String(reinterpret_cast<const char*>(Question.GetOption4()));
				 }
				 else if(QuestionNumber==CurrentQuestion)
			   	 {
					textBox1->Text = Convert::ToString(CurrentQuestion);
					
					std::ostringstream ostr;
					ostr << CurrentQuestion;
					infile.open(ostr.str(),ios::in);
					infile.seekg(0);
					infile.read((char*)&Question,sizeof(QuestionDetails));
					infile.close();

					richTextBox1->Text = gcnew String(reinterpret_cast<const char*>(Question.GetQuestion()));
					radioButton1->Text = gcnew String(reinterpret_cast<const char*>(Question.GetOption1()));
					radioButton2->Text = gcnew String(reinterpret_cast<const char*>(Question.GetOption2()));
					radioButton3->Text = gcnew String(reinterpret_cast<const char*>(Question.GetOption3()));
					radioButton4->Text = gcnew String(reinterpret_cast<const char*>(Question.GetOption4()));
				
					button1->Text="Finish";
				 }
				 else 
				 {
					StudentRecords Student;
					msclr::interop::marshal_context context;
					string s;
					char str[20];
					s = context.marshal_as<std::string>(StudentName);
					StringToChar(str,s);
					Student.SetName(str);

					s = context.marshal_as<std::string>(StudentRollNumber);
					StringToChar(str,s);
					Student.SetRollNumber(str);

					Student.SetMarks(StudentMarks);

					ofstream outfile;
					outfile.open("Students.dat",ios::app|ios::out);
					outfile.write((char*)&Student,sizeof(StudentRecords));
					outfile.close();
					Form3^ form3 = gcnew Form3();
					form3->StudentMarks = StudentMarks;
					form3->Show();
					Form2::Close();
				 }
			 }
private: void StringToChar(char* str,string s)
		 {
			int i;
			for(i=0;i<(int)s.length();i++)
				str[i] = s[i];
			str[i] = '\0';
		 }
};
}
