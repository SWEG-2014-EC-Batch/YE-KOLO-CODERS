#include <iostream>
using namespace std;

void reverse(char* str ){
	int length = 0;
	while(length != '\0'){
		length++;
	}
	for(int i = 0; i < length/2 ; i++){
		char temp;
	     temp = str[i];
	     str[i] = str[length - i - 1];
	     str[length - i - 1] = temp;
	}	 	
}
int main(){
    int length, str; 
    cout<<"enter the length of the word and the word \n";
    cin>> length>> str;
    reverse(str);
    cout<<" = " << str;
    return 0;
}
