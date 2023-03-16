#include<iostream>
using namespace std;
int main() {
    float gsalary, brate, pension, whours, bonus, gift, tax;
    cout << "Enter gross salary: ";
    cin >> gsalary; if (gsalary <= 0) {
        cout << "Invalid input! Gross salary must be greater than 0." << endl; return 0;
         }
        cout << "Enter worked hours: ";
        cin >> whours; if (whours < 0) {
    cout << "Invalid input! Worked hours cannot be negative." << endl; return 0;
}
   if (whours >= 40) {
        cout << "Enter bonus rate: ";
        cin >> brate; bonus = (whours - 40) * brate;
         }
    else { bonus = 0; }
        cout << "Enter gift amount: ";
        cin >> gift; if (gift < 0) {
   cout << "Invalid input! Gift amount cannot be negative." << endl; return 0;
   }
   float income = gift + gsalary + bonus;
    if (income < 200)
    {
            tax = 0;
    }
    else if (income >= 200 && income <= 600)
    {
        tax = 0.1 * income;
    } else if (income >= 600 && income <= 1200)
    {
         tax = 0.15 * income;
    }
     else if (income >= 1200 && income <= 2000)
     {
            tax = 0.2 * income;
     } else if (income >= 2000 && income <= 3500)
     {
          tax = 0.25 * income;
    } else
    {
         tax = 0.3 * income;
    } pension = 0.07 * gsalary;
     float nsalary = income - tax - pension;
      cout << "Your net salary is: " << nsalary << endl;
       return 0;


        }
