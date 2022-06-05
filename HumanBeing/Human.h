#pragma once
#include <string>

using namespace std;

class Human
{

private:
	string firstName;
	string lastName;
	string middleName;
	string address;
	string gender;
	string education;
	int age;

public:
	Human(string firstName, string lastName, string middleName, string address, string gender, string education, int age);
	string Info();
	string GetFirstName();
	string GetLastName();
	string GetMiddleName();
	string GetAddress();
	string GetGender();
	string GetEducation();
	int GetAge();

	void SetFirstName(string value);
	void SetLastName(string value);
	void SetMiddleName(string value);
	void SetAddress(string value);
	void SetGender(string value);
	void SetEducation(string value);
	void SetAge(int value);
	~Human();
};