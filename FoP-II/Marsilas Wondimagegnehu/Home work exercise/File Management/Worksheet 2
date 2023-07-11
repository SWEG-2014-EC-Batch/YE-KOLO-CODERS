#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream employeeData;
    employeeData.open("employeeDoc.txt", ios::in);
    if (!employeeData)
    {
        cout << "File could not be opened!" << endl;
        exit(1);
    }

    char name[100];
    double payRate, hours, regularPay, overtimePay, grossPay;

    int num = 1;
    double totalRegular = 0;
    double totalOvertime = 0;
    double totalGrosspay = 0;

    cout << "Information: Name, Rate, Hours." << endl;

    while (num <= 4)
    {
        employeeData >> name >> payRate >> hours;
       

        if (hours <= 40)
        {
            regularPay = hours * payRate;
            overtimePay = 0;
        }
        else
        {
            regularPay = 40 * payRate;
            overtimePay = (hours - 40) * (1.5 * payRate);
        }

        grossPay = regularPay + overtimePay;

        totalRegular += regularPay;
        totalOvertime += overtimePay;
        totalGrosspay += grossPay;

        num++;
    }
    cout<<"Total regularpay:" << totalRegular << endl;
    cout <<"Total overtime:"<< totalOvertime << endl;
    cout <<"Total grosspay:"<< totalGrosspay << endl;

    employeeData.close();

    return 0;
}
