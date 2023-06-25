#include <iostream>
#include "upper.h"
using namespace std;


int main()
{
    
    char str[100];
    cout << "ENTER A STRING:";
    cin.getline(str,100);
    tolowerCase(str);
    cout <<"THE NEW SENTENCE IS:"<<str;
    return 0;
}
