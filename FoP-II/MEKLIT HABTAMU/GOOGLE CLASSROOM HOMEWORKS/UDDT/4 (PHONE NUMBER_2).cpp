#include <iostream>
#include <iomanip>
using namespace std;

struct Phone
{
    long int areaCode;
    long int exchange;
    long int number;
    char name[50];
};


Phone phoneInformation[10];


int main()
{

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Your Name:";
        cin.ignore();
        cin.getline(phoneInformation[i].name, 100);
        cout << "Enter Area Code:";
        cin >> phoneInformation[i].areaCode;

        cout << "Enter Exchange:";
        cin >> phoneInformation[i].exchange;

        cout << "Enter number:";
        cin >> phoneInformation[i].number;
    }

    cout << "NAME"<<setw(25) <<"NUMBER" << endl;
    for (int i = 0; i < 10; i++)
    {

        cout << phoneInformation[i].name<<setw(25) << "(" << phoneInformation[i].areaCode << ") " << phoneInformation[i].exchange << "-" << phoneInformation[i].number << endl;
    }
}
