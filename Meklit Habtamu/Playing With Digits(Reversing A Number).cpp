#include<iostream>
using namespace std;
int main(){
   int number;
   int remainder;
   int reversed;

   cout<<"ENTER A NUMBER:";
   cin>>number;

   while(number>0)
{
    remainder=number%10;
    number=number/10;
    reversed=(reversed*10)+remainder;
}
   cout<<"The reverse of the number is:"<<reversed;

return 0;
}
