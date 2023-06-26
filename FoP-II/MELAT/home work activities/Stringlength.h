#include <iostream>
#include "vowels.h"
#include "stringlength.h"
using namespace std;

int main()
{
    char string[100];
    cout<<"ENTER A STRING OF CHARACTERS:";
    cin.getline(string,100);
    int length= string_length(string);
    int vowelnum=vowels(string);
    int consonants=length-vowelnum;
    cout<<"THE LENGTH OF THE STIRNG IS:"<<length<<endl;
    cout<<"THE NUMBER OF VOWEL IS:"<<vowelnum<<endl;
    cout<<"THE NUMBER OF CONSONANTS IS:"<<consonants<<endl;
}
