#include<iostream>
using namespace std;
int main() {
int x, k, i;
cout<<"Enter the number of rows";
cin>>x;
for(int i=x; i>=1; i--){
for(int k=i; k>=1; k--){
cout<<"* ";
}
cout<<endl;
}
return 0;

}
