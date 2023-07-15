#include <iostream>
using namespace std;

const int MAX_EMPLOYEES = 100; // Maximum number of employees

void searching(int num, int pay_code, int pay_codes[], float pays[])
{
    // Allow the user to search for a specific record
    cout << "\nEnter pay-code to search for: ";
    cin >> pay_code;
    bool found = false;
    for (int i = 0; i < num; i++)
    {
        if (pay_codes[i] == pay_code)
        {
            cout << "Employee " << i+1 << ": " << pays[i] << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "Record not found" << endl;
    }
}

void printing(int num, int pay_codes[], float pays[])
{
    // Print the employee data in tabular format
    cout << "\nEmployee data:" << endl;
    cout << "Pay-code\tPay" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << pay_codes[i] << "\t\t" << pays[i] << endl;
    }
}

void compute(int num, int pay_code, int pay_codes[], float pays[])
{
    // Loop through each employee and compute their pay based on their pay-code
    for (int i = 0; i < num; i++)
    {
        cout << "\nEmployee " << i+1 << endl;
        cout << "Enter pay-code (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker): ";
        cin >> pay_code;

        switch (pay_code)
        {
            case 1:
            {
                // Manager
                float salary;
                cout << "Enter weekly salary: ";
                cin >> salary;
                pays[i] = salary;
                break;
            }
            case 2:
            {
                // Hourly worker
                float hours_worked;
                cout << "Enter hours worked: ";
                cin >> hours_worked;
                float pay;
                if (hours_worked <= 40)
                {
                    pay = hours_worked * 10;
                }
                else
                {
                    float overtime_hours = hours_worked - 40;
                    pay = 40 * 10 + overtime_hours * 10 * 1.5;
                }
                pays[i] = pay;
                break;
            }
            case 3:
            {
                // Commission worker
                float sales;
                cout << "Enter gross weekly sales: ";
                cin >> sales;
                float pay = 250 + sales * 0.057;
                pays[i] = pay;
                break;
            }
            case 4:
            {
                // Pieceworker
                float items_produced, piece_rate;
                cout << "Enter number of items produced: ";
                cin >> items_produced;
                cout << "Enter piece rate: ";
                cin >> piece_rate;
                float pay = items_produced * piece_rate;
                pays[i] = pay;
                break;
            }
            default:
            {
                cout << "Invalid pay-code" << endl;
                pays[i] = 0;
            }
        }
        pay_codes[i] = pay_code;
    }
}

int main()
{
    // Prompt the user to enter the number of employees
    int num;
    int pay_code;
    int pay_codes[MAX_EMPLOYEES];
    float pays[MAX_EMPLOYEES];

    cout << "Enter the number of employees: ";
    cin >> num;

    if (num > MAX_EMPLOYEES)
    {
        cout << "Sorry, the maximum number of employees is " << MAX_EMPLOYEES << endl;
        return 1;
    }

    compute(num, pay_code, pay_codes, pays);
    searching(num, pay_code, pay_codes, pays);
    printing(num, pay_codes, pays);

    return 0;
