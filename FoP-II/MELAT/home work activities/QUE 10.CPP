#include <iostream>
using namespace std;

double process(double, double);
double output(double, double);

int main(){
	
	char input;
	do{
		double feet,inches;
		cout<<"Enter a length in feet and inches respectively \n";
	    cin>>feet>>inches;
	    process(feet, inches);
		
		cout<<"Would you like to repeat the program? Enter y/Y if you would like to continue:";
		cin>> input;
	}
	 while(input == 'y'|| input == 'Y');
	 return 0;
	
}
double process(double lengthFeet, double lengthInches){
     double meter, centi;
	 meter= lengthFeet /3.28;
	 centi= lengthInches * 2.54;
	 output(meter, centi);
}

double output(double meter, double centi){
	cout<<"length in meters: "<<meter<<endl;
	cout<<"length in centimeters: "<<centi<<endl;
}
