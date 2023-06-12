#include <iostream>
using namespace std;
int main()
{
   char c;
   cout<<"ENTER A SYMBOL:";
   cin>>c;
   if(c>='0' && c<='9')
   {
        switch (c%2)
        {
            case 0:cout<<"IT'S AN EVEN DIGIT ";break;
            case 1:cout<<"IT'S AN ODD DIGIT";break;

        }
   }
   else if(c>='a' && c<='z')
   {
        cout<<"IT'S IN LOWER CASE";
   }
   else if(c>='A' && c<='Z')
   {
        cout<<"IT'S IN UPPER CASE";
   }
   else
   {
        cout<<"IT'S A SPECIAL CHARACTER";
   }

    return 0;
}
