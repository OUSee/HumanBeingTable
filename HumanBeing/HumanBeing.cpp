#include "Human.h"
#include <string>

using namespace std;

void Human::SetFirstName(string value)
{
	this->firstName = value;
}

void Human::SetLastName(string value)
{
	this->lastName = value;
}

void Human::SetMiddleName(string value)
{
	this->middleName = value;
}

void Human::SetAddress(string value)
{
	this->address = value;
}

void Human::SetGender(string value)
{
	this->gender = value;
}

void Human::SetEducation(string value)
{
	this->education = value;
}

void Human::SetAge(int value)
{
	this->age = value;
}

Human::~Human()
{

}

Human::Human(string firstName, string lastName, string middleName, string address, string gender, string education, int age)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->middleName = middleName;
	this->address = address;
	this->gender = gender;
	this->education = education;
	this->age = age;
}

string Human::Info()
{
	return " Фамилия: " + this->lastName + "\n Имя: " + this->firstName + "\n Отчество: " + this->middleName + "\n Адрес:" + this->address + "\n Пол: " + this->gender + "\n Образование: " + this->education + "\n Возраст: " + to_string(this->age);
}

string Human::GetFirstName()
{
	return this->firstName;
}

string Human::GetLastName()
{
	return this->lastName;
}

string Human::GetMiddleName()
{
	return this->middleName;
}

string Human::GetAddress()
{
	return this->address;
}

string Human::GetGender()
{
	return this->gender;
}

string Human::GetEducation()
{
	return this->education;
}

int Human::GetAge()
{
	return this->age;
}