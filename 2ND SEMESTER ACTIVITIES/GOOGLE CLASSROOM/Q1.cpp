/*Write a function named getProduct() 
 that accepts one integer numbers and one double as a parameters 
 multiplies these two numbers and return the result
*/

#include <iostream>
using namespace std;

double getProduct(int, double);   // declaration of getProduct with two prototype
int main(){
	int firstNum;      
	double secondNum;
	cout<<"enter 2 numbers:the first integer and the second double "<<endl;
	cin>>firstNum;
	cin>>secondNum;
	cout<<getProduct(firstNum,secondNum);        // calling of the function by variable
	return 0;
}
  // function definition 
 double getProduct(int y, double x){
 	return x* y;
 }

