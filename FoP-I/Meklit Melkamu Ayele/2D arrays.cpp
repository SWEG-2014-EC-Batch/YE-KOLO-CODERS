#include<iostream>
using namespace std;
int main (){
int score[5][2];
int i, j;
cout<<"\nEnter The 2D Array Input: \n";
for(i=0; i<5; i++){
for(j=0; j<2; j++){
cout<<"\nscore["<<i<<"]["<<j<<"]= ";
cin>>score[i][j];
}
}
cout<<"\nThe 2D Array is Provided Here:\n";
for(i=0; i<5; i++){
for(j=0; j<2; j++){
cout<<"\t"<<score[i][j];
}
cout<<endl;
}
return 0;
}
