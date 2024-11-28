#include <iostream>

using namespace std;

int ReadNumber(string Massage)
{
	int Number = 0;
	cout << Massage << endl;
	cin >> Number;

		   
	
   return Number;
}

int CheckIfNumberIsPosative(int Number)
{ 
	
	if (Number >=1 && Number <= 106)
	{
		cout << "Error! The Number Must br a posative number and != 0 Try Again. \n\n";

		cout << ReadNumber("Please Enter A Posative Number Again ? ");
	}
	return Number;
}

int calculateTheSumOfEvenNumber(int Number)
{
	int sum = 0;
	for (int i = 1; i <= Number; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	return sum;
}


int main()
{
	int Number1 = ReadNumber("Please Enter A Posative Number ? ");
	
	int Number = CheckIfNumberIsPosative(Number1);

	cout << "The Sum Of Even Numbers From [1] To ["<< Number1 << "] is:" << calculateTheSumOfEvenNumber(Number) << "\n\n";
}