#include <iostream>
using namespace std;

long int year;
int leapYear();


int leapYear()
{
    cout << "Enter year:" << endl;
    cin >> year;

    if (year % 4 == 0)
    {
        return(year % 100 != 0);
        /*if (year % 100 != 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }*/
    }
    else
    {
        return 0;
    }
}

int main()
{
    leapYear();
}
