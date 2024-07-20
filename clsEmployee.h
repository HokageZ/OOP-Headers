#pragma once
#include <iostream>
#include "clsPerson.h"

using namespace std;

class clsEmployee : public clsPerson {
private:
	//Vars
	string _Title;
	string _Department;
	float _Salary;

protected:
	//Set
	void SetTitle(string Title)
	{
		_Title = Title;
	}
	void SetDepartment(string Department)
	{
		_Department = Department;
	}
	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}

	//Get
	string GetTitle()
	{
		return _Title;
	}
	string GetDepartment()
	{
		return _Department;
	}
	float GetSalary()
	{
		return _Salary;
	}

public:
	//Constractors
	clsEmployee()
	{

	}
	clsEmployee(string InputFirstName, string InputLastName, string InputEmail, string InputPhoneNumber, string InputID, string Title, string Department, float Salary, string InputAddressLine1, string InputAddressLine2, string InputCity, string InputCountry)
		:clsPerson(InputFirstName, InputLastName, InputEmail, InputPhoneNumber, InputID, InputAddressLine1, InputAddressLine2, InputCity, InputCountry)
	{
		_Title = Title;
		_Department = Department;
		_Salary = Salary;
	}

	//Methods
	void PrintData()
	{
		cout << "_____________________________________________" << endl;
		cout << "ID         : " << GetID() << endl;
		cout << "First Name : " << GetFirstName() << endl;
		cout << "Last Name  : " << GetLastName() << endl;
		cout << "Full Name  : " << FullName() << endl;
		cout << "Email      : " << GetEmail() << endl;
		cout << "PhoneNumber: " << GetPhoneNumber() << endl;
		cout << "Title      : " << GetTitle() << endl;
		cout << "Department : " << GetDepartment() << endl;
		cout << "Salary     : " << GetSalary() << endl;
		cout << "_____________________________________________" << endl;
	}

	//Properties 
	__declspec(property(get = GetTitle, put = SetTitle)) string Title;
	__declspec(property(get = GetDepartment, put = SetDepartment)) string Department;
	__declspec(property(get = GetSalary, put = SetSalary)) float Salary;

};
