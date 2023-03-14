#include <iostream>

using namespace std;

int main()
{
    float t,q,p,a,f,Total;

      cout<<"Enter Your Test result";
      cin>>t;

while (t>15)
    {
        cout<<"Wrong input re-enter the result of Your Test";
        cin>>t;
    }

      cout<<"Enter Your Quiz result";
      cin>>q;

while (q>5)
    {
        cout<<"Wrong input re-enter the result of Your Quiz";
        cin>>q;
    }

      cout<<"Enter Your Project result";
      cin>>p;

while (p>20)
    {
        cout<<"Wrong input re-enter the result of Your Project";
        cin>>p;
    }

      cout<<"Enter Your Assignment result";
      cin>>a;

while (a>10)
    {
        cout<<"Wrong input re-enter the result of Your Assignment";
        cin>>a;
    }
      cout<<"Enter the result of your Final Exam";
      cin>>f;

while (f>50)
    {
        cout<<"Wrong input re-enter the result of Your Final Exam";
        cin>>f;
    }

      Total=t+q+p+a+f;
      cout<<"Your Total result is="<<Total<<endl;

if(Total>=90)
{
cout<<"A+";
}
else if(Total<=89 && Total>=80)
{
cout<<"A";
}
else if(Total<=79 && Total>=75)
{
cout<<"B+";
}
else if(Total<=74 && Total>=60)
{
cout<<"B";
}
else if(Total<=59 && Total>=55)
{
cout<<"C+";
}
else if(Total<=54&& Total>=45)
{
cout<<"C";
}
else if(Total<=44&&Total>=30)
{
cout<<"D";
}
else
{
cout<<"F";

}
    return 0;
}
