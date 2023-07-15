#include <iostream>
using namespace std;

struct Employees    //create a struct to hold related data items
{
    float salary, hours, sales, items_produced, piece_rate, overtime, pay;
    int pay_code;
} employee[100];

int main()
{
    // Prompt the user to enter the number of employees
    int num;
    cout<<"Enter the number of employees: ";
    cin>>num;

    // Create arrays to store the pay-codes and pays of each employee
    float pay;
    // Loop through each employee and compute their pay based on their pay-code
    for (int i = 0; i < num; i++)
    {
        employee[i].overtime = 0;
        employee[i].salary = 0;
        cout << "\nEmployee " << i+1 << endl;
        cout << "Enter pay-code (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker): ";
        cin >>employee[i].pay_code;
        switch (employee[i].pay_code)
        {
            case 1:
            {  // Manager
                cout << "Enter weekly salary: ";
                cin >>employee[i].salary;
                pay =employee[i].salary;
                break;
            }
            case 2:
            {  // Hourly worker
                cout << "Enter hours worked: ";
                cin >>employee[i].hours;
                if (employee[i].hours <= 40)
                {
                   pay = employee[i].hours * 10;
                }
                else
                {
                    employee[i].overtime =  employee[i].hours - 40;
                    pay= 40 * 10 +employee[i].overtime * 10 * 1.5;
                }
                break;
            }
            case 3:
            {  // Commission worker

                cout << "Enter gross weekly sales: ";
                cin >> employee[i].sales;
                pay = 250 +  employee[i].sales * 0.057;
                break;
            }
            case 4:
            {  // Pieceworker
                cout << "Enter number of items produced: ";
                cin >> employee[i].items_produced;
                cout << "Enter piece rate: ";
                cin >> employee[i].piece_rate;
                pay = employee[i].items_produced * employee[i].piece_rate;
                break;
            }
            default:
            {
                cout << "Invalid pay-code" << endl;
                pay = 0;
            }
        }
      employee[i].pay = pay;
    }

    // Print the employee data in tabular format
    cout << "\nEmployee data:" << endl;
    cout << "Pay-code\tPay" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << employee[i].pay_code << "\t\t" << employee[i].pay << endl;
    }

    // Allow the user to search for a specific record
    int search_pay_code;
    cout << "\nEnter pay-code to search for: ";
    cin >> search_pay_code;
    bool found = false;
    for (int i = 0; i < num; i++)
    {
        if (employee[i].pay_code == search_pay_code)
        {
            cout << "Employee " << i+1 << ": " << employee[i].pay << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "Record not found" << endl;
    }

    return 0;
}
