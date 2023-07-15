#include <iostream>
#include <fstream>
using namespace std;
struct Employees
{
    float salary, hours, sales, items_produced, piece_rate, overtime, pay;
    int pay_code;
} employee[100];

void compute(int num,float pays[],int pay_codes[])
{
    // Loop through each employee and compute their pay based on their pay-code
    for (int i = 0; i < num; i++)
    {
        cout << "\nEmployee " << i+1 << endl;
        cout << "Enter pay-code (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker): ";
        int pay_code;
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
void printing(int num, float pays[],int pay_codes[])
{
    // Print the employee data in tabular format
    cout << "\nEmployee data:" << endl;
    cout << "Pay-code\tPay" << endl;
    ofstream outfile; //write employee data into a file
    outfile.open("employees.txt");

    if(!outfile)
    {
        cerr<<"CANNOT OPEN THIS FILE"<<endl;
        return ;
    }
    for (int i = 0; i < num; i++) 
    {
        outfile << pay_codes[i] << "\t\t" << pays[i] << endl;
    }
    outfile.close();
    
    ifstream infile("employees.txt",ios::binary); //read employee data from a file and print in a tabular format
    if(!infile)
    {
        cerr<<"CANNOT OPEN THIS FILE"<<endl;
        return ;
    }

    cout << "\nEmployee data:" << endl;
    cout << "Pay-code\tPay" << endl;
    int read_pay_code;
    float read_pay;
    while (infile >> read_pay_code >> read_pay) 
    {
        cout << read_pay_code << "\t\t" << read_pay << endl;
    }
    infile.close();
    
}
void searching(int num,int pay_codes[], float pays[])
{
    int search_pay_code;  // search for employee pay
    cout << "\nEnter pay-code to search for: ";
    cin >> search_pay_code;
    bool found = false;
    ifstream search("employees.txt",ios::binary);

    if(!search)
    {
        cerr<<"CANNOT OPEN THIS FILE!";
        return ;
    }
    int read_pay_code;
    float read_pay;
    while(search>>read_pay_code>>read_pay)
    {
        if(read_pay_code==search_pay_code)
        {
               cout<<"PAY FOR THE GIVEN PAY CODE"<<search_pay_code<<":"<<read_pay<<endl;
               found= true;
               break;
        }
    }

  
    if (!found) 
    {
        cout << "Record not found" << endl;
        return ;
    }
    search.close();
}
int main() {
    // Prompt the user to enter the number of employees
    int num;
    cout << "Enter the number of employees: ";
    cin >> num;
    

    // Create arrays to store the pay-codes and pays of each employee
    int pay_codes[num];
    float pays[num];
    compute(num,pays,pay_codes);
    printing(num,pays,pay_codes);
    searching(num,pay_codes,pays);



     return 0;
}


