#include<iostream>
using namespace std;
int main()
{
     float Total_mark,q,a,p,t,f;
     cout<<"ENTER YOUR QUIZ MARK:";
      do
{
        cin>>q; if(q<0 || q>5)
{
        cout<<"Invalid entry."; return 0;
}
}
    while(q<0 || q>5);
      cout<<"ENTER ASSIGNMENT MARK: ";
    do
{
      cin>>a; if(a<0 || a>10)
{
      cout<<"INVALID ENTRY."; return 0;
}
}
     while(a<0 || a>10);
     cout<<"ENTER PROJECT MARK:";
     do
{
    cin>>p; if(p<0 || p>20)
{
    cout<<"INVALID ENTRY."; return 0;

}
}
     while(p<0 || p>20);
     cout<<"ENTER TEST MARK:";
     do
{
     cin>>t;
     if(t<0 || t>15)
{
     cout<<"INVALID ENTRY"; return 0;

}
}
     while(t<0 || t>15);
     cout<<"ENTER FINAL TEST MARK:";
     do
{
     cin>>f; if(f<0 || f>50)
{
    cout<<"INVALID ENTRY"; return 0;

}
}    while(f<0 || f>50);

     Total_mark=q+a+p+t+f;

     cout<<"YOUR TOTAL MARK IS:"<< Total_mark <<endl;
     if(Total_mark>=90)
{
     cout<<"Your grade is A+.";
}    else if(Total_mark>=80)
{    cout<<"Your grade A.";
}    else if(Total_mark>=75)
{    cout<<"Your grade is B+.";
}    else if(Total_mark>=60)
{    cout<<"Your grade is B.";
}    else if(Total_mark>=55)
{    cout<<"Your grade is B-.";
}    else if(Total_mark>=45)
{    cout<<"Your grade is C.";
}    else if(Total_mark>=30)
{    cout<<"Your grade is D.";
}    else
{
        cout<<"Your grade is F.";
}



     return 0;
}
