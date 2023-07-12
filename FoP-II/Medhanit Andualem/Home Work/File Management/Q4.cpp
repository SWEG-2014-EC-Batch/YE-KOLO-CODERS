#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int id[10];
    char sex[10];
    double hourlyWage[10];
    double timeAtCompany[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter ID:";
        cin >> id[i];
        cout << "Enter sex(F/M):";
        cin >> sex[i];
        cout << "Enter hourly wage:";
        cin >> hourlyWage[i];
        cout << "Enter Time with company:";
        cin >> timeAtCompany[i];
    }

    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (id[j] > id[j + 1])
            {
                int temp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp;

                char temp_sex = sex[j];
                sex[j] = sex[j + 1];
                sex[j + 1] = temp_sex;

                double temp_wage = hourlyWage[j];
                hourlyWage[j] = hourlyWage[j + 1];
                hourlyWage[j + 1] = temp_wage;

                double temp_time = timeAtCompany[j];
                timeAtCompany[j] = timeAtCompany[j + 1];
                timeAtCompany[j + 1] = temp_time;
            }
        }
    }

    ofstream employeeFile;
    employeeFile.open("employeeData.txt");
    if (!employeeFile)
    {
        cout << "Error opening file." << endl;
        exit(1);
    }

    for (int i = 0; i < 10; i++)
    {
        employeeFile << id[i] << ' ' << sex[i] << ' ' << hourlyWage[i] << ' ' << timeAtCompany[i] << endl;
    }

    employeeFile.close();

    ifstream employeeCalc;
    employeeCalc.open("employeeData.txt",ios::in);

    if (!employeeCalc)
    {
        cout << "File not found." << endl;
        exit(1);
    }

    double hoursWorked[10], totalPay[10];

    for (int i = 0; i < 10; i++)
    {
        employeeCalc >> id[i] >> sex[i] >> hourlyWage[i] >> timeAtCompany[i];

        cout << "Enter Hours Worked:";
        cin >> hoursWorked[i];

        totalPay[i] = hoursWorked[i] * hourlyWage[i];
    }

    employeeCalc.close();

    ifstream employeeUpdate;
    employeeUpdate.open("employeeData.txt",ios::in);

    if (!employeeUpdate)
    {
        cout << "File not found." << endl;
        exit(1);
    }

    for (int i = 0; i < 10; i++)
    {
        employeeUpdate >> id[i] >> sex[i] >> hourlyWage[i] >> timeAtCompany[i];

        cout << "Update Hourly Wage:";
        cin >> hourlyWage[i];
        cout << "Update Time with the company:";
        cin >> timeAtCompany[i];
    }

    employeeUpdate.close();

    ofstream newFile;
    newFile.open("employeeData.txt",ios::out);
    if (!newFile)
    {
        cout << "File not found." << endl;
        exit(1);
    }

    for (int i = 0; i < 10; i++)
    {
        newFile << id[i] << ' ' << sex[i] << ' ' << hourlyWage[i] <<' ' << timeAtCompany[i] << endl;
    }

    newFile.close();
}
