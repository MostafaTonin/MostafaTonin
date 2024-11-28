//#include <iostream>
//#include <vector>
//#include <cctype> // For tolower function
//using namespace std;
//
//// Function to check if a character is a vowel
//bool isVowel(char ch) {
//    ch = tolower(ch); // Convert character to lowercase
//    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
//}
//
//// Function to check if a character is a consonant
//bool isConsonant(char ch) {
//    ch = tolower(ch); // Convert character to lowercase
//    return (ch >= 'b' && ch <= 'z' && !isVowel(ch));
//}
//
//// Function to check if a character is a special symbol
//bool isSpecialSymbol(char ch) {
//    string symbols = "@#$%";
//    return (symbols.find(ch) != string::npos);
//}
//
//// Function to get the number of characters to be input
//int getNumberOfCharacters() {
//    int numChars;
//    cout << "Enter the number of characters you want to input: ";
//    cin >> numChars;
//    return numChars;
//}
//
//// Function to input characters and categorize them
//void inputCharacters(int numChars, vector<char>& vowels, int& vowelCount, int& consonantCount, int& specialCount, int& unknownCount) {
//    char inputChar;
//    cout << "Enter the characters one by one:" << endl;
//    for (int i = 0; i < numChars; ++i) {
//        cin >> inputChar;
//
//        if (isVowel(inputChar)) {
//            vowels.push_back(inputChar);
//            vowelCount++;
//            cout << inputChar << " is a vowel." << endl;
//        }
//        else if (isConsonant(inputChar)) {
//            consonantCount++;
//            cout << inputChar << " is a consonant." << endl;
//        }
//        else if (isSpecialSymbol(inputChar)) {
//            specialCount++;
//            cout << inputChar << " is a special symbol." << endl;
//        }
//        else {
//            unknownCount++;
//            cout << inputChar << " is an unknown character." << endl;
//        }
//    }
//}
//
//// Function to display the vowels collected
//void displayVowels(const vector<char>& vowels) {
//    cout << "\nList of entered vowels:" << endl;
//    int index = 0;
//    while (index < vowels.size()) {
//        cout << vowels[index];
//        if (vowels[index] == 'a' || vowels[index] == 'e') {
//            cout << " (Note: This is an 'a' or 'e')";
//        }
//        cout << endl;
//        index++;
//    }
//}
//
//// Function to display the summary of counts
//void displaySummary(int vowelCount, int consonantCount, int specialCount, int unknownCount) {
//    cout << "\nSummary of Character Counts:" << endl;
//    cout << "Total Vowels: " << vowelCount << endl;
//    cout << "Total Consonants: " << consonantCount << endl;
//    cout << "Total Special Symbols: " << specialCount << endl;
//    cout << "Total Unknown Characters: " << unknownCount << endl;
//}
//
//int main() {
//    // Initialize variables
//    vector<char> vowels;
//    int vowelCount = 0, consonantCount = 0, specialCount = 0, unknownCount = 0;
//
//    // Function calls
//    int numChars = getNumberOfCharacters();
//    inputCharacters(numChars, vowels, vowelCount, consonantCount, specialCount, unknownCount);
//    displayVowels(vowels);
//    displaySummary(vowelCount, consonantCount, specialCount, unknownCount);
//
//    return 0;
//}
//using namespace std;
//
//// Function to check if a character is a vowel
//bool isVowel(char ch) {
//    ch = tolower(ch); // Convert character to lowercase
//    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
//}
//
//// Function to check if a character is a consonant
//bool isConsonant(char ch) {
//    ch = tolower(ch); // Convert character to lowercase
//    return (ch >= 'b' && ch <= 'z' && !isVowel(ch));
//}
//
//// Function to check if a character is a special symbol
//bool isSpecialSymbol(char ch) {
//    string symbols = "@#$%";
//    return (symbols.find(ch) != string::npos);
//}
//
//// Function to get the number of characters to be input
//int getNumberOfCharacters() {
//    int numChars;
//    cout << "Enter the number of characters you want to input: ";
//    cin >> numChars;
//    return numChars;
//}
//
//// Function to input characters and categorize them
//void inputCharacters(int numChars, vector<char>& vowels, int& vowelCount, int& consonantCount, int& specialCount, int& unknownCount) {
//    char inputChar;
//    cout << "Enter the characters one by one:" << endl;
//    for (int i = 0; i < numChars; ++i) {
//        cin >> inputChar;
//
//        if (isVowel(inputChar)) {
//            vowels.push_back(inputChar);
//            vowelCount++;
//            cout << inputChar << " is a vowel." << endl;
//        }
//        else if (isConsonant(inputChar)) {
//            consonantCount++;
//            cout << inputChar << " is a consonant." << endl;
//        }
//        else if (isSpecialSymbol(inputChar)) {
//            specialCount++;
//            cout << inputChar << " is a special symbol." << endl;
//        }
//        else {
//            unknownCount++;
//            cout << inputChar << " is an unknown character." << endl;
//        }
//    }
//}
//
//// Function to display the vowels collected
//void displayVowels(const vector<char>& vowels) {
//    cout << "\nList of entered vowels:" << endl;
//    int index = 0;
//    while (index < vowels.size()) {
//        cout << vowels[index];
//        if (vowels[index] == 'a' || vowels[index] == 'e') {
//            cout << " (Note: This is an 'a' or 'e')";
//        }
//        cout << endl;
//        index++;
//    }
//}
//
//// Function to display the summary of counts
//void displaySummary(int vowelCount, int consonantCount, int specialCount, int unknownCount) {
//    cout << "\nSummary of Character Counts:" << endl;
//    cout << "Total Vowels: " << vowelCount << endl;
//    cout << "Total Consonants: " << consonantCount << endl;
//    cout << "Total Special Symbols: " << specialCount << endl;
//    cout << "Total Unknown Characters: " << unknownCount << endl;
//}
//
//// Main function to call all other functions
//int main() {
//    // Initialize variables
//    vector<char> vowels;
//    int vowelCount = 0, consonantCount = 0, specialCount = 0, unknownCount = 0;
//
//    // Function calls
//    int numChars = getNumberOfCharacters();
//    inputCharacters(numChars, vowels, vowelCount, consonantCount, specialCount, unknownCount);
//    displayVowels(vowels);
//    displaySummary(vowelCount, consonantCount, specialCount, unknownCount);
//
//    return 0;
//}
#include <iostream>
#include <vector>
#include <cctype> // For tolower function
using namespace std;

// Function to get the number of characters to be input
int getNumberOfCharacters() {
    int numChars;
    cout << "Enter the number of characters you want to input: ";
    cin >> numChars;
    return numChars;
}

// Function to categorize the characters using a switch statement
void categorizeCharacter(char ch, vector<char>& vowels, int& vowelCount, int& consonantCount, int& specialCount, int& unknownCount) {
    // Convert character to lowercase for uniform checking
    char lowerCh = tolower(ch);

    switch (lowerCh) {
        // Vowels
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        vowels.push_back(ch);
        vowelCount++;
        cout << ch << " is a vowel." << endl;
        break;

        // Consonants (letters other than vowels)
    case 'b': case 'c': case 'd': case 'f': case 'g': case 'h':
    case 'j': case 'k': case 'l': case 'm': case 'n': case 'p':
    case 'q': case 'r': case 's': case 't': case 'v': case 'w':
    case 'x': case 'y': case 'z':
        consonantCount++;
        cout << ch << " is a consonant." << endl;
        break;

        // Special symbols
    case '@':
    case '#':
    case '$':
    case '%':
        specialCount++;
        cout << ch << " is a special symbol." << endl;
        break;

        // Unknown or other characters
    default:
        unknownCount++;
        cout << ch << " is an unknown character." << endl;
        break;
    }
}

// Function to input characters and categorize them
void inputCharacters(int numChars, vector<char>& vowels, int& vowelCount, int& consonantCount, int& specialCount, int& unknownCount) {
    char inputChar;
    cout << "Enter the characters one by one:" << endl;
    for (int i = 0; i < numChars; ++i) {
        cin >> inputChar;
        categorizeCharacter(inputChar, vowels, vowelCount, consonantCount, specialCount, unknownCount);
    }
}

// Function to display the vowels collected
void displayVowels(const vector<char>& vowels) {
    cout << "\nList of entered vowels:" << endl;
    int index = 0;
    while (index < vowels.size()) {
        cout << vowels[index];
        if (tolower(vowels[index]) == 'a' || tolower(vowels[index]) == 'e') {
            cout << " (Note: This is an 'a' or 'e')";
        }
        cout << endl;
        index++;
    }
}

// Function to display the summary of counts
void displaySummary(int vowelCount, int consonantCount, int specialCount, int unknownCount) {
    cout << "\nSummary of Character Counts:" << endl;
    cout << "Total Vowels: " << vowelCount << endl;
    cout << "Total Consonants: " << consonantCount << endl;
    cout << "Total Special Symbols: " << specialCount << endl;
    cout << "Total Unknown Characters: " << unknownCount << endl;
}

// Main function to call all other functions
int main() {
    // Initialize variables
    vector<char> vowels;
    int vowelCount = 0, consonantCount = 0, specialCount = 0, unknownCount = 0;

    // Function calls
    int numChars = getNumberOfCharacters();
    inputCharacters(numChars, vowels, vowelCount, consonantCount, specialCount, unknownCount);
    displayVowels(vowels);
    displaySummary(vowelCount, consonantCount, specialCount, unknownCount);

    return 0;
}
