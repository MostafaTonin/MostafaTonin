#include <iostream>

using namespace std;

int
ReadNumber(string Massage)
{
	int Number = 0;
	do {

		cout << Massage << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int RecursiveMethod(int Number)
{
	if (Number <= 1)
	{
		return Number;
	}
	else
	{
		return RecursiveMethod(Number - 1) + RecursiveMethod(Number - 2);
	}
	
}
int main()
{
	int Number = ReadNumber("Please Enter A Posative Numnber ? \n");
	cout << endl;
	cout << "The Fiboncci Number of Number [" << Number << "] is : "<< RecursiveMethod(Number) << endl;

	return 0;
}