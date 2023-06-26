#include <iostream>
#include "to upper.h"
using namespace std;

int main(){
	char str[100];
	cout<<"Write a string \n";
	cin.getline(str, 100); 
    to_upper(str);
    cout<<str;
    return 0;
}
