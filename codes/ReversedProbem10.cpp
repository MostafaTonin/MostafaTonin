#include <iostream>

using namespace std;

int ReadPositiveNumber(string Massage)
{
	int Number = 0;
	do
	{
		cout << Massage << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}


void PrintReversedNumber(int Number)
{
	int Remainder = 0;

	while (Number > 0)
	{

		Remainder = Number % 10;

		Number = Number / 10;
		cout << Remainder << endl;
	}
	
}

int ReversedNumber(int Number)
{
	int Remainder = 0;


	int Reversed = 0;

	while (Number > 0)
	{

		Remainder = Number % 10;

		Number = Number / 10;

		Reversed = Reversed * 10 + Remainder;

		
	}
	return Reversed;
}
	int main()
	{
		int Number = ReadPositiveNumber("Enter A Posative Number ?");

		cout << ReversedNumber(Number) << endl;
	   PrintReversedNumber(ReversedNumber(Number));
		
	
	}