#include<iostream>
using namespace std;

int main()
{
    int num, r,  reverse=0;
    cout<<"Enter a number ";
    cin>>num;
    while(num)
    {
    r=num%10;
    num=num/10;
    reverse=(reverse*10)+r;
    }
    cout<<"Reversed number= "<<reverse;
    }
