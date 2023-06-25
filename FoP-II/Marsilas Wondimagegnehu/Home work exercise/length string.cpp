#include <iostream>
#include "strlength.h"
using namespace std;

 int main(){
    const char* str = "Welcome Message";
 	
 	int length = stringLength(str);
    int vowels = countVowels(str); 
    int consonants = countConsonant(str);
 	cout<< "Length  "<< length <<endl;
 	cout<< "Vowels "<< vowels <<endl;
 	cout<< "Consonants "<<consonants <<endl;
 	
 }
