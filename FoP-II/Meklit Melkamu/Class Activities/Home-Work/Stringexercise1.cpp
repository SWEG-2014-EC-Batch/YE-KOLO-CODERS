#include <iostream>
using namespace std;
int string_length(char string[])
{
    int length=0;
    while(string[length]!='\0')
    {
       length++;
    }
    return length;
}
int vowels(char string[])
{
     int vowelnum=0;
     for (int i=0;i<string_length(string);i++)
     {
       char c=string[i];
       if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') 
       {
            vowelnum++;
       }
     }

     return vowelnum;
 }

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
