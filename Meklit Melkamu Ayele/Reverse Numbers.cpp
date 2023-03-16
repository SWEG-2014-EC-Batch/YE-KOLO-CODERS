#include<iostream>
using namespace std;
int main(){
   int remainder,number,Revnumber=0;

   cout<<"ENTER A NUMBER:";
   cin>>number;

   while(number>0){

    remainder=number%10;
    number=number/10;
    Revnumber=(Revnumber*10)+remainder;
}
   cout<<"THE REVERSED NUMBER IS:"<<Revnumber<<endl;






return 0;
}
