#include <iostream>
#include <cstring>

#include "StringLengthCalculator.h"
#include "NumberOfVowels.h"
#include "NumberOfConsonants.h"
#include "ReverseString.h"
#include "CompareStrings.h"
#include "UpperCaseConverter.h"
#include "LowerCaseConverter.h"

using namespace std;

int main()
{
    char word[100];
    char word_2[100];

    int vowels = 0, consonants = 0;

    cout << "Enter word: ";
    cin.getline(word, 100);
    
    cout << "String Length = " << StringLengthCalc(word, 100) << endl;
    cout << "Number of vowels = " << VowelNum(word, vowels) << endl;
    cout << "Number of consonants = " << consonantNum(word, consonants) << endl;

    cout << "Enter another word: ";
    cin.getline(word_2, 100);
    cout << "Compare: " << stringCompare(word, word_2) << endl;

    upperCase(word);
    cout << "UpperCase: " << word << endl;
    lowerCase(word);
    cout << "LowerCase: " << word << endl;

    reverseString(word);
   cout << "Reverse of the string: " << word << endl;

    return 0;
}
