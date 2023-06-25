#include<iostream>
#include <cmath>
using namespace std;
const int SIZE=5;
double current[SIZE];
double resistance[SIZE]={16,27,39,56,81};

void getCurrent( double current[])
{
  for(int i=0;i<5;i++)
  {
    cout<<"ENTER THE CURRENT:"<<endl;
    cin>>current[i];
  }
}
void powercalc(double power[])
{

  getCurrent(current);
  for(int i=0;i<5;i++)
  {
     power[i] = pow(current [i], 2) * resistance[i];
  }
}
void printpower()
{
  double power[SIZE];
  powercalc(power);
  for(int i=0; i<SIZE; i++)
  {
    cout << "Power " << i+1 << ": " << power[i] << endl;
  }
}

int main()
{
  printpower();
  return 0;
}
