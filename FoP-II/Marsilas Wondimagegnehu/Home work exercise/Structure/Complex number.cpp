#include <iostream>
using namespace std;

struct complex_number{
	double real;
	double imaginary;
};
double add(double a, double b){
	return a + b;
}
double substruct(double a, double b){
	return a - b;
}
double multiply(double a, double b){
	return a * b;
}
double divide(double a, double b){
	return a / b;
}
int main(){
	struct complex_number complex;
	

	cout << "Enter two numbers, the real and the imaginary respectively\n";
	cin >> complex.real;
	cin >> complex.imaginary;
    cout << "The complex number = " << complex.real << " + " << complex.imaginary << "i" << endl;
 
	cout << complex.real << " + " << complex.imaginary <<" = " << add(complex.real,complex.imaginary) << endl;
		
    cout << complex.real << " - " << complex.imaginary <<" = " << substruct(complex.real, complex.imaginary) << endl;
		
	cout<< complex.real << " * " << complex.imaginary <<" = " << multiply(complex.real, complex.imaginary) << endl;
			
	cout << complex.real << " / " << complex.imaginary <<" = " << divide(complex.real, complex.imaginary) << endl;
	
	 return 0;	
}
