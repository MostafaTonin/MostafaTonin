#include<iostream>

#include<cstdlib>

using namespace std;


int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;
}
enum enCharType { SmallLetter = 1, CapitalLitter = 2, SpecialCharacter = 3, Digit = 4 };


char GetRandomcharacter(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::SmallLetter:
	{
		return char(RandomNumber(97, 122));
		break;
	}
	case enCharType::CapitalLitter:
	{
		return char(RandomNumber(65, 90));
		break;
	}

	case enCharType::SpecialCharacter:
	{
		return char(RandomNumber(33, 47));
		break;
	}
	case enCharType::Digit:
	{
		return char(RandomNumber(48, 57));
		break;
	}

	}
}


int main()
{
	srand((unsigned)time(NULL));
	cout << GetRandomcharacter(enCharType::SmallLetter) << endl;
	cout << GetRandomcharacter(enCharType::CapitalLitter) << endl;
	cout << GetRandomcharacter(enCharType::SpecialCharacter) << endl;
	cout << GetRandomcharacter(enCharType::Digit) << endl;

	return 0;
}



