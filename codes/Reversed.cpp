#include <iostream>

using namespace std;

int ReadPositiveNumber()
{
	int N;
	cout << "Enter A Positive Number ? \n ";
	cin >> N;
	return N;
}


int PrintReversedNumber(int Number)
{
	int Remainder = 0;
	int sum = 0; 
	while (Number > 0)
	{

		Remainder = Number % 10;
		Number = Number / 10;

		sum = sum * 10 + Remainder;
		
	}
	return sum;
}

int main()
{
	cout << PrintReversedNumber(ReadPositiveNumber());
}