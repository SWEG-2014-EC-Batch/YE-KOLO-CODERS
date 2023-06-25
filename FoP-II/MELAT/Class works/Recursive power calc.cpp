#include <iostream>
using namespace std;
int powercalc(int );


int powercalc(int num,int power)
{
  if(power==1)
  {
    return num;
  }
  else if(power==0)
  {
    return 1;
  }
  else
  {

    return num*powercalc(num,power-1);
  }
}
int main()
{
  int num,power;
  cout<<"enter the number:";
  cin>>num;
  cout<<"enter the power:";
  cin>>power;
  cout<<powercalc(num,power);
}
