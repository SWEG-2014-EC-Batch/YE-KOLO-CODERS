#include <iostream>
#include "to lower.h"
using namespace std;

int main(){
	char str[100];
	cout<<"enter the string\n ";
	cin.getline(str,100);
	to_lower(str);
	cout<<str;
	return 0;
	
}
