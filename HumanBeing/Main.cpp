#include <iostream>
#include <vector>
#include <string>
#include "Human.h"
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	vector <Human> arr;
	while (1)
	{
		int act;
		cout << "	Выберите действие:\n 1) Добавить человека. \n 2) Вывод списка граждан, возраст которых превышает заданный. \n 3) Вывод списка граждан с высшим образованием. \n 4) Вывод списка граждан заданного пола. \n 5) Удалить человека. \n 6) Информация о всех людях. \n 7) Редактирование записей. \n 8) Выход. \n";
		cin >> act;
		switch (act)
		{
		case 1:
		{
			string firstName;
			string lastName;
			string middleName;
			string address;
			string gender;
			string education;
			int age;
			cout << "Введите фамилию: ";
			cin >> firstName;
			cout << "Введите имя: ";
			cin >> lastName;
			cout << "Введите отчество: ";
			cin >> middleName;
			cout << "Введите адрес: ";
			cin >> address;
			cout << "Введите пол: ";
			cin >> gender;
			cout << "Введите образование: ";
			cin >> education;
			cout << "Введите возраст: ";
			cin >> age;
			arr.push_back(Human(firstName, lastName, middleName, address, gender, education, age));
			system("cls");
			break;
		}
		case 2:
		{
			int tmp;
			cout << "Введите возраст: ";
			cin >> tmp;
			for (int i = 0; i < arr.size(); i++)
			{
				if (arr[i].GetAge() > tmp)
				{
					cout << arr[i].Info() << "\n\n";
				}
			}
			system("pause");
			system("cls");
			break;
		}
		case 3:
		{
			cout << "Список людей с высшем образованием: ";
			for (int i = 0; i < arr.size(); i++)
			{
				if ((arr[i].GetEducation() == "vishee")or (arr[i].GetEducation() == "Vishee"))
				{
					cout << arr[i].Info() << "\n\n";
				}
			}
			system("pause");
			system("cls");
			break;
		}
		case 4:
		{
			string g;
			cout << " Введите пол: ";
			cin >> g;
			for (int i = 0; i < arr.size(); i++)
			{
				if (arr[i].GetGender() == g)
				{
					cout << arr[i].Info() << "\n\n";
				}
			}
			system("pause");
			system("cls");
			break;
		}
		case 5:
		{
			cout << "\nВведите индекс удаляемого объекта: ";
			int i;
			cin >> i;
			if (i >= 0 && i < arr.size())
			{
				arr.erase(arr.begin() + i);
			}
			else cout << "Неверный индекс.\n";
			system("pause");
			system("cls");
			break;
		}
		case 6:
		{
			for (int i = 0; i < arr.size(); i++)
			{
				cout << endl;
				cout << "Информация о всех людях: \n" << arr[i].Info() << endl;
			}
			system("pause");
			system("cls");
			break;
		}
		case 7:
		{
			cout << "\n Укажите индекс редактироваемой записи: ";
			int i;
			cin >> i;
			if (i >= 0 && i < arr.size())
			{
				cout << "\nВыберите поле для измененения:\n 1 - Фамилия\n 2 - Имя\n 3 - Отчество\n 4 - Адрес\n 5 - Пол\n 6 - Образование\n 7 - Возраст\n";
				int k;
				cin >> k;
				if (k == 1)
				{
					string val;
					cout << "Введите значение: ";
					cin >> val;
					arr[i].SetLastName(val);
				}
				else if (k == 2)
				{
					string val;
					cout << "Введите значение: ";
					cin >> val;
					arr[i].SetFirstName(val);
				}
				else if (k == 3)
				{
					string val;
					cout << "Введите значение: ";
					cin >> val;
					arr[i].SetMiddleName(val);
				}
				else if (k == 4)
				{
					string val;
					cout << "Введите значение: ";
					cin >> val;
					arr[i].SetAddress(val);
				}
				else if (k == 5)
				{
					string val;
					cout << "Введите значение: ";
					cin >> val;
					arr[i].SetGender(val);
				}
				else if (k == 6)
				{
					string val;
					cout << "Введите значение: ";
					cin >> val;
					arr[i].SetEducation(val);
				}
				else if (k == 7)
				{
					int val;
					cout << "Введите значение: ";
					cin >> val;
					arr[i].SetAge(val);
				}
			}
			else
			{
				cout << "Неверный индекс\n";
			}
			system("pause");
			system("cls");
			break;
		}
		case 8:
		{
			exit(0);
		}
		default:
		{
			return 0;
		}
		}
	}
	return 0;
}