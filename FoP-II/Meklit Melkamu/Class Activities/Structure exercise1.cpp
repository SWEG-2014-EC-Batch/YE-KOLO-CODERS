#include <iostream>
using namespace std;
struct phone
{
    int area_code;
    int exchange;
    int number;
}phone_number1={212,767,8900},phone_number2;

int main()
{
    
   cout<<"ENTER THE AREA CODE:";
   cin>>phone_number2.area_code;
   cout<<"ENTER THE EXCHANGE:";
   cin>>phone_number2.exchange;
   cout<<"ENTER THE NUMBER:";
   cin>>phone_number2.number;
   cout<<"THE INITALIZED NUMBER IS:"<<"("<<phone_number1.area_code<<")"<<" "<<phone_number1.exchange<<"-"<<phone_number1.number<<endl;
   cout<<"THE ANOTHER NUMBER IS:"<<"("<<phone_number2.area_code<<")"<<" "<<phone_number2.exchange<<"-"<<phone_number2.number<<endl;
}
