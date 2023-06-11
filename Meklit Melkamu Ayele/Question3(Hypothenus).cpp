#include <iostream>
#include<cmath>
using namespace std;
void accept(double &side1, double &side2);
double hypothenus(double side1, double side2);
int main()
{
     double side1,side2;
     cout<<"ENTER THE LENGTH OF THE FIRST SIDE:";
     cin>>side1;
     cout<<"ENTER THE LENGHT OF THE SECOND SIDE:";
     cin>>side2;
     cout<<"THE HYPOTHENUS WILL BE:"<<hypothenus(side1,side2);
     return 0;
}

double hypothenus(double side1, double side2)
{
   double hypothenus= hypot(side1,side2);
   return hypothenus;
}
