#include<iostream>
using namespace std;
int main() {
int x, k, i;
cout<<"Enter the number of rows";
cin>>x;
for(int i=1; i<=x; i++){
for(int k=1; k<=i; k++){
cout<<"* ";
}
cout<<endl;
}
return 0;

}
