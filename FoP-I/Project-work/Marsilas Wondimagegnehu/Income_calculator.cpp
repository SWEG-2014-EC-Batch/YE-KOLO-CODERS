#include <iostream>
#include <math.h>
#include <ctype.h>
#include <string>
using namespace std;

int main(){
    float gross_salary;
    int worked_hours;
    float income_tax_rate;
    float income_tax;
    int bonus = 0;
    float net;
    float pension;
    char condition;

    cout << "Enter your gross salary: ";
    cin >> gross_salary;
    
    cout << "Enter worked hours: ";
    cin >> worked_hours;
    

    bonus = gross_salary * (worked_hours - 40);
    pension = gross_salary * .07;
  
    if(worked_hours > 40)
    {
        bonus = gross_salary * (worked_hours - 40);
    }
    
            if(gross_salary <=200){
                net = gross_salary - pension + bonus;
                cout << "ur payment 0: " << net << endl;
            }else if(gross_salary>200 && gross_salary <= 600){
                net = gross_salary - (pension + (gross_salary * 0.1)) + (bonus* 0.1);
                cout << "ur payment 10: " << net;
            }else if(gross_salary > 600 && gross_salary <= 1200){
                net = gross_salary - (pension + (gross_salary * .15)) + (bonus* .15);
                cout << "ur payment 15: " << net;
            }else if(gross_salary > 1200 && gross_salary <= 2000){
                net = gross_salary - (pension + (gross_salary * .2)) + (bonus* .2);
                cout << "ur payment 20: " << net;
            }else if (gross_salary > 2000 && gross_salary <= 3500){
                net = gross_salary - (pension + (gross_salary * .25)) + (bonus* .25);
                cout << "ur payment 25: " << net;
            }else if (gross_salary > 3500){
                net = gross_salary - (pension + (gross_salary * .3)) + (bonus* .3);
                cout << "ur payment 30: " << net;
            }  
} 
