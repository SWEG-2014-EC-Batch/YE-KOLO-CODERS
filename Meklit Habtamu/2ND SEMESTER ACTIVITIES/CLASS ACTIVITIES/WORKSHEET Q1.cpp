#include <iostream>
#include <string>
using namespace std;

float num1, num2;

float mult(float, float);

float mult(float , float )
{
    cout << "Enter two numbers:" << endl;
    cin >> num1 >> num2;
    float product;
    product=num1*num2;
    cout << "Product=" << product<<endl;
    
}
int main()
{

    mult(num1,num2);
}
