#include<iostream>
#include<string>

using namespace std;
string ReadText()
{
	string Text;

	cout << "Please Enter A Text ?\n";
	getline(cin, Text);

	return Text;

}

string EncryptText(string Text, short EncryptionKey)
{

	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int) Text[i] + EncryptionKey);

	}
	return Text;
}

string DecryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);

	}
	return Text;
}
int main()
{
	const short Encryptionkey = 2; // This is the key.

	string TextAfterEncryption, TextAfterDecryption;

	string Text = ReadText();
	TextAfterEncryption = EncryptText(Text, Encryptionkey);

	TextAfterDecryption = DecryptText(TextAfterEncryption,Encryptionkey);

	cout << "\n Text Before Encryption :";
	cout << Text << endl;

	cout << "\n Text  Encryption :";
	cout << TextAfterEncryption << endl;

	cout << "\nText After Decryption : ";
	cout << TextAfterDecryption << endl;
	return 0;


}