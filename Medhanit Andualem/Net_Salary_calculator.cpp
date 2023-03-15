#include <iostream>

using namespace std;

int main()
{
  float gsalary,whours,pension,brate,bonus,gift,tax;
  cout<<"ENTER GROSS SALARY:";
  cin>>gsalary;
    if(gsalary<0){
        cout<<"INVALID INPUT";return 0;
    }
 cout<<"ENTER WORKING HOURS:";
 cin>>whours;
   if(whours<0){
    cout<<"INVALID INPUT"; return 0;
   }
   if(whours>40){
    cout<<"ENTER BONUS RATE";
    cin>>brate;
    bonus=(whours-40)*brate;
   }
   else{ bonus=0;}
  cout<<"ENTER GIFT AMOUNT:";
  cin>>gift;

 float  income=gsalary+bonus+gift;

  if(income<=200){tax=0;}
  else if(income>=600 && income<=1200){tax=0.15*income;}
  else if (income>=1200 && income<=2000){tax=0.2*income;}
  else if(income>=2000 && income<=3500){tax=0.25*income;}
  else {tax=0.3*income;}

  pension=0.7*income;

  float nsalary=income-tax-pension;

  cout<<"YOUR NETSALARY IS:"<<nsalary<<endl;

    return 0;
}
