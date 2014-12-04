#pragma once
#include "string"
#include "iostream"
using namespace std; 
class QuestionDetails
{
private:
	
	char QuestionStatement[500];
	char Option1[500];
	char Option2[500];
	char Option3[500];
	char Option4[500];
	int Marks;
	int Answer;

public:
	void SetQuestion(char* Ques)
	{
		strcpy_s(QuestionStatement,Ques);
	}

	void SetOption1(char* option1)
	{
		strcpy_s(Option1,option1);
	}

	void SetOption2(char* option2)
	{
		strcpy_s(Option2,option2);
	}

	void SetOption3(char* option3)
	{
		strcpy_s(Option3,option3);
	}

	void SetOption4(char* option4)
	{
		strcpy_s(Option4,option4);
	}

	void SetAnswer(int ans)
	{
		Answer = ans;
	}

	void SetMarks(int marks)
	{
		Marks = marks;
	}

	char* GetQuestion()
	{
		return QuestionStatement;
	}

	char* GetOption1()
	{
		return Option1;
	}

	char* GetOption2()
	{
		return Option2;
	}

	char* GetOption3()
	{
		return Option3;
	}

	char* GetOption4()
	{
		return Option4;
	}

	int GetAnswer()
	{
		return Answer;
	}

	int GetMarks()
	{
		return Marks;
	}

	QuestionDetails(void)
	{
	}

	virtual ~QuestionDetails(void)
	{
	}
};

