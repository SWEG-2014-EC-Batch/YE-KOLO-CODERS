#include <iostream>
using namespace std;
double getProduct(int ,double);
double getProduct(int num1,double num2)
{
return(num1 * num2);

}
int main()
{
    double product;
    int firstNum;
    double secondNum;

    cout<<"Enter Numbers:"<<endl;
    cin>>firstNum>>secondNum;
    product=getProduct(firstNum, secondNum);
  cout<<"Product="<<product<<endl;
}
