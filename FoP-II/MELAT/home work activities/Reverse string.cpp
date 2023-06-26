#include <iostream>
#include "reverse string.h"
using namespace std;

int main()
{
    const int maxlength=100;
    char mystring[maxlength];
    cout<<"ENTER A STRING:";
    cin.getline (mystring,maxlength);
    reverse_string(mystring);
    cout<<"THE REVERSED STIRNG IS:"<<mystring;


    return 0;
}
