#include <iostream>
using namespace std;

struct Phone
{
    long int areaCode;
   long int exchange;
   long int number;
};

Phone firstPhone={321,768,6901};
Phone secondPhone;
int main()
{
cout<<"Enter Area Code:";
cin>>secondPhone.areaCode;

cout<<"Enter Exchange:";
cin>>secondPhone.exchange;

cout<<"Enter number:";
cin>>secondPhone.number;

cout<<"First Number:"<<"("<<firstPhone.areaCode<<") "<<firstPhone.exchange<<"-"<<firstPhone.number<<endl;
cout<<"Second Number:"<<"("<<secondPhone.areaCode<<") "<<secondPhone.exchange<<"-"<<secondPhone.number<<endl;


}
