#include <iostream>
#include <string.h>
using namespace std;

void stringFunction(char);
void stringFunction(char word[100])
{

    for (int i = 0; i < strlen(word); i++)
    {

        word[i] = toupper(word[i]);
        if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            cout << "Vowels:";
            cout << word[i] << endl;
        }

        else
            continue;
    }
}
int main()
{
    char term[100];

    cout << "Enter a word:";
    cin.getline(term, 100);

    stringFunction(term);
}
