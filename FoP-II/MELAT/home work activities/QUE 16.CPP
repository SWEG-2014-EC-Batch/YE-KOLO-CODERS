#include <iostream>
using namespace std;

int hour;
int minute;
int newhour;

void inputTime()
{
    cout << "Enter Hour: ";
    cin >> hour;
    while (hour >= 24 || hour < 0)
    {
        cout << "WRONG INPUT!ENTER APPROPIATE HOUR: ";
        cin >> hour;
    }

    cout << "Enter Minute: ";
    cin >> minute;
    while (minute >= 60 || minute < 0)
    {
        cout << "WRONG INPUT!ENTER APPROPIATE MINUTE: ";
        cin >> minute;
    }
}

void convertTime(char &type)
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

void outputTime()
{

    cout << "In 12-hour notation the time is: " << newhour << ":" << minute << " " << (hour < 12 ? "AM" : "PM") << endl;
}

int main()
{
    char type;
    int num;

    do
    {
        inputTime();
        convertTime(type);
        outputTime();
        cout << "ENTER 0 TO CONTINUE:" << endl;
        cin >> num;
    } while (num == 0);

    return 0;
