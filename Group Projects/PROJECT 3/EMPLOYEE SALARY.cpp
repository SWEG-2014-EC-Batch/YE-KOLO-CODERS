#include<iomanip>
#include<iostream>
using namespace std;
const int MAX_EMPLOYEES = 100; 
struct Employee 
{ 
    int code; 
    double salary, hours, sales, pieces; 
}; 
int main()

{ 
    Employee employees[MAX_EMPLOYEES]; 
    int count = 0; // Prompt user to enter employee data char choice = 'y'; 
    while (choice == 'y' && count < MAX_EMPLOYEES) 
    {
         cout << "Enter employee code (1 = Manager, 2 = Hourly, 3 = Commission, 4 = Pieceworker): "; 
         cin >> employees[count].code; 
    switch (employees[count].code) 
    { 
        case 1: 
              cout << "Enter weekly salary: "; 
              cin >> employees[count].salary;
               break; 
        case 2: 
              cout << "Enter hourly wage: "; 
              double hourlyWage; 
              cin >> hourlyWage;
              cout << "Enter hours worked: "; 
              cin >> employees[count].hours; 

              if (employees[count].hours > 40) 
              {
                 employees[count].salary = 40 * hourlyWage + (employees[count].hours - 40) * hourlyWage * 1.5; 
              } 
              else { employees[count].salary = employees[count].hours * hourlyWage; }
              break; 
 case 3:
              cout << "Enter gross weekly sales amount: ";
              cin >> employees[count].sales;
              employees[count].salary = 250 + employees[count].sales * 0.057;
              break;
        case 4:
              cout << "Enter number of items produced: ";
              cin >> employees[count].pieces;
              cout << "Enter amount paid per item: ";
              double pieceRate;
              cin >> pieceRate;
              employees[count].salary = employees[count].pieces * pieceRate;
              break;
        default:
              cout << "Invalid employee code. Please try again." << endl;
              count--;
              break;
    }
              count++;
              if (count < MAX_EMPLOYEES)
            {
                cout << "Do you want to enter data for another employee? (y/n): ";
                cin >> choice;
            }
    }
             cout << "Weekly Pay of Employees" << endl;
             cout << setw(10) << left << "Code" << setw(10) << left << "Salary" << endl;
         for (int i = 0; i < count; i++)
         {
              cout << setw(10) << left << employees[i].code << setw(10) << left << employees[i].salary << endl;
         }


         return 0;


 }
