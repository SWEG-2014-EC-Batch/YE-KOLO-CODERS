#include <iostream>
using namespace std;

double max(double x, double y){
	return (x>y)? x:y ;    //ternary operator
}
double max(double x, double y, double z){
    return max (max(x, y), z); 
     
}

int main(){
	double num1, num2, num3;
	cout<<"Enter 3 numbers: "<<endl;
	cin>>num1>>num2>>num3;
	
	cout<<"the largest of the two number is   " <<max(num1,num2)<<endl;
	cout<<"the largest of the three number is   " <<max(num1, num2, num3);

	return 0;
}
