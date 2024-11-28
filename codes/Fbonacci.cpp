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

void Fibobacci(int Number)
{
	int prev1 = 1 , prev2 = 0;

	cout << prev2 <<"\n" << prev1 << endl;
	int NewFibo = 0;

	for (int i = 0; i < Number; i++)
	{
		NewFibo = prev1 + prev2;
		cout << NewFibo << endl;
		prev2 = prev1;
		prev1 = NewFibo;

	}
	
}

int main()
{
	int Number = ReadNumber("Please Enter A Posative Numnber ? \n");
	cout << endl;
	Fibobacci(Number);
	return 0;
}