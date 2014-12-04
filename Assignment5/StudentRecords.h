#pragma once
#include "string"
using namespace std;

class StudentRecords
{
private:
	char Name[20];
	char RollNumber[10];
	int Marks;
public:
	void SetRollNumber(char* s)
	{
		strcpy_s(RollNumber,s);
	}

	void SetName(char* s)
	{
		strcpy_s(Name,s);
	}

	void SetMarks(int score)
	{
		Marks = score;
	}

	char* GetName()
	{
		return Name;
	}

	char* GetRollNumber()
	{
		return RollNumber;
	}

	int GetMarks()
	{
		return Marks;
	}

	StudentRecords(void)
	{
	}

	virtual ~StudentRecords(void)
	{
	}
};

