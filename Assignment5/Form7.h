#pragma once
#include "StudentRecords.h"
#include "fstream"
using namespace std;
namespace Assignment5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form7
	/// </summary>
	public ref class Form7 : public System::Windows::Forms::Form
	{
	public:
		Form7(void)
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
		~Form7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(143, 150);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(181, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form7::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Average Marks : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(145, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(51, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Highest Marks : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(51, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Lowest marks ;";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(145, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(122, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 25);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Statistics";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(145, 108);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(51, 153);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Select Student : ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(51, 192);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(85, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Student Marks ; ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(145, 192);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(127, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 31);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form7::button1_Click);
			// 
			// Form7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(343, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Form7";
			this->Text = L"Statistics";
			this->Load += gcnew System::EventHandler(this, &Form7::Form7_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form7_Load(System::Object^  sender, System::EventArgs^  e) {
				 int max=-1,min=99999;
				 StudentRecords Student;
				 ifstream infile;
				 int TotalMarks=0;
				 infile.open("Students.dat",ios::in|ios::ate);
				 int endposition = (int)infile.tellg();
				 infile.close();
				 int n = endposition/sizeof(StudentRecords);
				 int i,Marks;

				 for(i=0;i<n;i++)
				 {
					infile.open("Students.dat",ios::in);
					infile.seekg(i*sizeof(StudentRecords));
					infile.read((char*)&Student,sizeof(StudentRecords));
					infile.close();

					comboBox1->Items->Add(gcnew String(reinterpret_cast<const char*>(Student.GetName())));

					Marks = Student.GetMarks();
					if(Marks>max)
						max = Marks;
					if(Marks<min)
						min = Marks;
					TotalMarks+=Student.GetMarks();
				 }

				 float Average = (float)TotalMarks/(float)n;

				 label2->Text = Convert::ToString(Average);
				 label5->Text = Convert::ToString(max);
				 label7->Text = Convert::ToString(min);
			 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 ifstream infile;
			 StudentRecords Student;
			 int i=0;
			 while(1)
			 {
				infile.open("Students.dat",ios::in);
				infile.seekg(i*sizeof(StudentRecords));
				infile.read((char*)&Student,sizeof(StudentRecords));
				infile.close();

				if(gcnew String(reinterpret_cast<const char*>(Student.GetName()))==Convert::ToString(comboBox1->Items[comboBox1->SelectedIndex]))
					break;
				i++;
			 }

			 label10->Text = Convert::ToString(Student.GetMarks());
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form7::Close();
		 }
};
}
