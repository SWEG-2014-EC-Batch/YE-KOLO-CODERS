#include <iostream>
#include "compare.h"
using namespace std;

int main(){
	char str1[100];
	char str2[100];
	
	cout<< "enter the first word \n";
	cin.getline(str1, 100); 
	
	cout<<"enter the second word \n";
    cin.getline(str2, 100);
    
    cout<< compare(str1, str2);
    return 0;	
}
