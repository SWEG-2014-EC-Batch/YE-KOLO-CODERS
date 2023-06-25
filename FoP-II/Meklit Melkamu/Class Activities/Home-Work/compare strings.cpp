#include <iostream>
#include "compare.h"
using namespace std;


int main()
{
    char string1[100], string2[100];
    cout << "Enter the first string: ";
    cin.getline(string1, 100);
    cout << "Enter the second string: ";
    cin.getline(string2, 100);
    int result = compare(string1, string2);
    if (result == 0) 
    {
        cout << "The strings are equal" << endl;
    } 
    else if (result > 0) 
    {
        cout << "The first string is greater" << endl;
    } else 
    {
        cout << "The second string is greater" << endl;
    }
    return 0;
}
