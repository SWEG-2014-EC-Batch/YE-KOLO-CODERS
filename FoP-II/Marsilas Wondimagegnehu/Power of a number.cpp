#include<iostream>
using namespace std;

int calculatePower(int num, int power){
	 if(power == 1){
	 	return num;
	 }
	 else if(power == 0){
	 	return 1;	
	 }
	 else {
	 	return num* calculatePower(num, power-1);
	 }
	}
int main(){
	int num, power;
	cout<<"enter a number and a power respectively \n ";
	cin >>num>>power;
	cout<<"the result of the number is " <<calculatePower(num, power)<<endl;
}
