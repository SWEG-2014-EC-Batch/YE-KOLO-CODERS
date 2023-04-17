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

