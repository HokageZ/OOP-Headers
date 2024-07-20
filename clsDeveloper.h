#pragma once
#include <iostream>
#include "clsEmployee.h"
using namespace std;

class clsDeveloper : public clsEmployee
{
private:
	//Vars
	string _MainProgrammingLanguage;

protected:
	//Set and Get
	void SetMainProgrammingLanguage(string MainProgrammingLanguage)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}
	string GetMainProgrammingLanguage()
	{
		return _MainProgrammingLanguage;
	}

public:
	//Constractor
	clsDeveloper()
	{

	}

	clsDeveloper(string InputFirstName, string InputLastName, string InputEmail, string InputPhoneNumber, string InputID, string Title, string Department, float Salary, string InputAddressLine1, string InputAddressLine2, string InputCity, string InputCountry, string MainProgrammingLanguage)
		:clsEmployee(InputFirstName, InputLastName, InputEmail, InputPhoneNumber, InputID, Title, Department, Salary, InputAddressLine1, InputAddressLine2, InputCity, InputCountry)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}

	//Properties
	__declspec(property(get = GetMainProgrammingLanguage, put = SetMainProgrammingLanguage)) string MainProgrammingLanguage;

	//Methods
	void PrintData()
	{
		cout << "_____________________________________________" << endl;
		cout << "ID                      : " << GetID() << endl;
		cout << "First Name              : " << GetFirstName() << endl;
		cout << "Last Name               : " << GetLastName() << endl;
		cout << "Full Name               : " << FullName() << endl;
		cout << "Email                   : " << GetEmail() << endl;
		cout << "PhoneNumber             : " << GetPhoneNumber() << endl;
		cout << "Title                   : " << GetTitle() << endl;
		cout << "Department              : " << GetDepartment() << endl;
		cout << "Salary                  : " << GetSalary() << endl;
		cout << "MainProgrammingLanguage : " << GetMainProgrammingLanguage() << endl;
		cout << "_____________________________________________" << endl;

		Address.Print();
	}
};
