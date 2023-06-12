#include<iostream>
using namespace std;
int main(){
int upper_case[26];
int lower_case[26];
for(int i=0; i<26; i++){
    lower_case[i]='a'+i;
    upper_case[i]='A'+i;
}
for(int i=0; i<=26; i+=5){
for(int j=0; j<5; j++){
cout<<(char)upper_case[i+j]<<(char)lower_case[i+j]<<'\t';
;
if(i==25)
    break;
}
cout<<endl;
}
return 0;
}


