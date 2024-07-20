#pragma once
#include <iostream>
using namespace std;
class clsCalculator
{
private:
	enum eCalcOperations
	{
		Addition, Subtraction, Multiplication, Division, Clearence
	};
	float _Present_Number = 0;
	float _Last_Number;
	float _Last_Input;
	eCalcOperations _Last_Operation;
public:
	void PrintResult()
	{
		switch (_Last_Operation)
		{
		case Addition:
			cout << "Results After Adding " << _Last_Input << " is " << _Present_Number << endl;
			break;
		case Subtraction:
			cout << "Results After Subtracting " << _Last_Input << " is " << _Present_Number << endl;
			break;
		case Multiplication:
			cout << "Results After Multiplying by " << _Last_Input << " is " << _Present_Number << endl;
			break;
		case Division:
			cout << "Results After Dividing by " << _Last_Input << " is " << _Present_Number << endl;
			break;
		case Clearence:
			cout << "Results After Clearing is " << _Present_Number << endl;
			break;
		default:
			break;
		}
	}
	void Clear()
	{
		_Last_Number = _Present_Number;
		_Present_Number = 0;
		_Last_Operation = Clearence;
	}
	void Add(float _User_Input_Number)
	{
		_Last_Number = _Present_Number;
		_Present_Number += _User_Input_Number;
		_Last_Input = _User_Input_Number;
		_Last_Operation = Addition;
	}
	void Sub(float _User_Input_Number)
	{
		_Last_Number = _Present_Number;
		_Present_Number -= _User_Input_Number;
		_Last_Input = _User_Input_Number;
		_Last_Operation = Subtraction;
	}
	void Multiply(float _User_Input_Number)
	{
		_Last_Number = _Present_Number;
		_Present_Number *= _User_Input_Number;
		_Last_Input = _User_Input_Number;
		_Last_Operation = Multiplication;
	}
	void Divide(float _User_Input_Number)
	{
		if (_User_Input_Number == 0)
		{
			_User_Input_Number = 1;
			cout << "Changed the Zero to 1 \n";
		}
		_Last_Number = _Present_Number;
		_Present_Number /= _User_Input_Number;
		_Last_Input = _User_Input_Number;
		_Last_Operation = Division;
	}
	void UndoLastOperation()
	{
		_Present_Number = _Last_Number;
	}
	void PrintFinalResilt()
	{
		cout << "Final Result is " << _Present_Number << endl;
	}
};

