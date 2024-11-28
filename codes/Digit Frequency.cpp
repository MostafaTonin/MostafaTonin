#include <iostream>

using namespace std;

int ReadPositiveNumber(string Massage)
{
	int Number = 0;
	do
	{
		cout << Massage << endl;
		cin >> Number;
		return Number;
	} 
	while (Number <= 0);
}


int PrintDigitFrequency(int Number,int Checknumber)
{
	int Remainder = 0;
	int Counter = 0;


	while (Number > 0)
	{

		Remainder = Number % 10;
		Number = Number / 10;
		if (Remainder == Checknumber)
			Counter++;
		

	}
	return Counter;
}


int main()
{
		int Number1 = ReadPositiveNumber("Enter A Posative Number ?");

		int CheckNumber = ReadPositiveNumber("Enter A Search Number ?");
		cout << "\n The Frequency of Number [" << CheckNumber << "] Is [" << PrintDigitFrequency(Number1, CheckNumber) << "] Time(s)";
	    cout << endl;
 
}