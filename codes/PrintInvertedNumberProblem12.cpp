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

void PrintInvertedNumber(int Number)
{
	for (int i = Number; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}
int main()
{
	int Number = ReadPositiveNumber("Enter A Posative Number ?");
	PrintInvertedNumber(Number);

}

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

void PrintInvertedNumber(int Number)
{
	for (int i = 65; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}
int main()
{
	int Number = ReadPositiveNumber("Enter A Posative Number ?");
	PrintInvertedNumber(Number);

}