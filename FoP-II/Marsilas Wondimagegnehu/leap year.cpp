#include <iostream>
using namespace std;
 
 int leap_yr();
 int main(){
 	cout<<leap_yr();
	  }

int leap_yr(){
 	int year;
 	cout<<"enter a year ";
 	cin>>year;
 	if(year % 4==0){	
 			if( year % 100 ==0){
 				if (year % 400 == 0){
 					return 1;
				 }
				 else {
				 	return 0;
				 }
			 }
 			return 1;
	}
		 else {
		 }
	return 0;
 }
