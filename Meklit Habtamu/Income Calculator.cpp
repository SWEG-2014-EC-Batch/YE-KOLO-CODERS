#include <iostream>

using namespace std;

int main()
{
  float grosssalary,workedhours,overtimerate,bonus,gift,tax;
  float pension=0.7*income;
  cout<<"ENTER GROSS SALARY:";
  cin>>grosssalary;
  
   while(gsalary<0)
   {
        cout<<"Invalid Input,please re-enter your grosssalary";
        cin>>grosssalary;
    }
    
 cout<<"Enter worked hours:";
 cin>>workedhours;
 
   while (workedhours<0)
   {
    cout<<"Invalid Input,please re-enter your workedhours";
    cin>>workedhours;
   }
   
   if(workedhours>40)
   {
    cout<<"Enter your overtime rate";
    cin>>overtimerate;
    bonus=(workedhours-40)*overtimerate;
   }
   
   else
   {
   bonus=0;
   }
   
   
  cout<<"ENTER GIFT AMOUNT:";
  cin>>gift;

 float  income=gsalary+bonus+gift;

  if(income<=200)
  {
  tax=0;
  }
  else if(income>=600 && income<=1200)
  {
  tax=0.15*income;
  }
  else if (income>=1200 && income<=2000)
  {
  tax=0.2*income;
  }
  else if(income>=2000 && income<=3500)
  {
  tax=0.25*income;
  }
  else 
  {
  tax=0.3*income;
  }

  float nsalary=income-tax-pension;

  cout<<"YOUR NETSALARY IS:"<<nsalary<<endl;
