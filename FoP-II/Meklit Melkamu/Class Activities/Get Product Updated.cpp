#include <iostream>
#include "calculatio.h"
using namespace std;

int main(){
  double secondNum;
  int firstNum;
  cout<<"ENTER THE FIRST NUMBER";
  cin>>firstNum;
  cout<<"ENTER THE SECOND NUMBER";
  cin>>secondNum;
  double product=getproduct(firstNum, secondNum);
  cout<<"THE PRODUCT OF THE NUMBERS IS:"<<product;
   message();
 
}
