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

bool CheckIfPlaindromeNumber(int Number)
{
	return Number == ReversedNumber(Number);
}
int main()
{
	int Number = ReadPositiveNumber("Enter A Posative Number ?");

	if (CheckIfPlaindromeNumber(Number))
	{
		cout << "\n Yes, Number [" << Number << "] Is A Plaindrome Number. \n ";

	}
	else
		cout << "\n No, Number [" << Number << "] Is Not A Plaindrome Number \n";

	return 0;
}