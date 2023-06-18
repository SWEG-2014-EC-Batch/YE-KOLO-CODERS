#include <iostream>
using namespace std;

int hour;
int minute;
int newhour;

void input()
{
    cout << "Enter Hour";
    cin >> hour;
    while (hour >= 24 || hour < 0)
    {
        cout << "Invalid input! Enter an hour between 0-23: ";
        cin >> hour;
    }

    cout << "Enter Minute (0-59): ";
    cin >> minute;
    while (minute >= 60 || minute < 0)
    {
        cout << "Invalid input!";
        cin >> minute;
    }
}

void convert(char &type)
{
    if (hour == 0)
    {
        newhour = 12;
        type = 'A';
    }
    else if (hour >= 1 && hour <= 11)
    {
        newhour = hour;
        type = 'A';
    }
    else if (hour == 12)
    {
        newhour = hour;
        type = 'P';
    }
    else if (hour > 12 && hour <= 23)
    {
        newhour = hour - 12;
        type = 'P';
    }
}

void output(char type)
{
    cout << "In 12-hour notation the time is: " << newhour << ":";

    if (minute < 10) 
    {
        cout << "0";
    }

    cout << minute << " " << type << "M" << endl;
}

int main()
{
    char type;
    int num;

    do
    {
        input();
        convert(type);
        output(type);
        cout << "Enter 0 to continue or any other number to exit: ";
        cin >> num;
    } 
    while (num == 0);

  return 0;
}
