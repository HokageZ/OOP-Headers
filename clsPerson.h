#pragma once
#include <iostream>
using namespace std;
class clsPerson
{
private:
	//Vars 
	string _FirstName;
	string _LastName;
	string _Email;
	string _PhoneNumber;
	string _ID;

	class clsAddress
	{

	private:
		string _AddressLine1;
		string _AddressLine2;
		string _City;
		string _Country;

	public:

		clsAddress(string AddressLine1, string AddressLine2, string City, string Country)
		{
			_AddressLine1 = AddressLine1;
			_AddressLine2 = AddressLine2;
			_City = City;
			_Country = Country;

		}

		string SetAddressLine1(string AddressLine1)
		{
			_AddressLine1 = AddressLine1;
		}

		string GetAddressLine1()
		{
			return _AddressLine1;
		}

		string SetAddressLine2(string AddressLine2)
		{
			_AddressLine2 = AddressLine2;
		}

		string GetAddressLine2()
		{
			return _AddressLine2;
		}


		string SetCity(string City)
		{
			_City = City;
		}

		string GetCity()
		{
			return _City;
		}


		string SetCountry(string Country)
		{
			_Country = Country;
		}

		string GetCountry()
		{
			return _Country;
		}

		void Print()
		{
			cout << "\nAddress:\n";
			cout << _AddressLine1 << endl;
			cout << _AddressLine2 << endl;
			cout << _City << endl;
			cout << _Country << endl;
		}
	};

protected:
	//Set 
	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}
	void SetEmail(string Email)
	{
		_Email = Email;
	}
	void SetPhoneNumber(string PhoneNumber)
	{
		_PhoneNumber = PhoneNumber;
	}

	//Get 
	string GetFirstName()
	{
		return _FirstName;
	}
	string GetLastName()
	{
		return _LastName;
	}
	string GetID()
	{
		return _ID;
	}
	string FullName()
	{
		return _FirstName + " " + _LastName;
	}
	string GetEmail()
	{
		return _Email;
	}
	string GetPhoneNumber()
	{
		return _PhoneNumber;
	}

public:
	//Define Address
	clsAddress Address = clsAddress("", "", "", "");


	//Constractors
	clsPerson()
	{

	}
	clsPerson(string InputFirstName, string InputLastName, string InputEmail, string InputPhoneNumber, string InputID, string InputAddressLine1, string InputAddressLine2, string InputCity, string InputCountry)
	{
		_ID = InputID;
		_FirstName = InputFirstName;
		_LastName = InputLastName;
		_Email = InputEmail;
		_PhoneNumber = InputPhoneNumber;
		Address = clsAddress(InputAddressLine1, InputAddressLine2, InputCity, InputCountry);
	}

	//Properties 
	__declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
	__declspec(property(get = GetLastName, put = SetLastName)) string LastName;
	__declspec(property(get = GetPhoneNumber, put = SetPhoneNumber)) string PhoneNumber;
	__declspec(property(get = GetEmail, put = SetEmail)) string Email;
	__declspec(property(get = GetID)) string ID;
	__declspec(property(get = GetAddressLine1, put = SetAddressLine1)) string AddressLine1;
	__declspec(property(get = GetAddressLine2, put = SetAddressLine2)) string AddressLine2;
	__declspec(property(get = GetCity, put = SetCity)) string City;
	__declspec(property(get = GetCountry, put = SetCountry)) string Country;	

	//Methods 
	void SendEmail(string Subject, string EmailBody)
	{
		cout << "\n\nThe following Email sent successfully to : " << _Email << endl;
		cout << "Subject : " << Subject << endl;
		cout << "Body : " << EmailBody << endl;
	}
	void SendSMS(string SMSBody)
	{
		cout << "\n\nThe following SMS sent successfully to : " << _PhoneNumber << endl;
		cout << "SMS : " << SMSBody << endl;
	}
	void PrintData()
	{
		cout << "_____________________________________________" << endl;
		cout << "ID         : " << _ID << endl;
		cout << "First Name : " << _FirstName << endl;
		cout << "Last Name  : " << _LastName << endl;
		cout << "Full Name  : " << FullName() << endl;
		cout << "Email      : " << _Email << endl;
		cout << "PhoneNumber: " << _PhoneNumber << endl;
		cout << "_____________________________________________" << endl;
	}
};