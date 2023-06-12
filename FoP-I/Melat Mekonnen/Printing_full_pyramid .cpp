#include<iostream>
using namespace std;
int main() {
int x, i, j, k;
cout<<"Enter height";
cin>>x;
for(int i=1; i<=x; i++){
for(int k=x-1; k>=i; k--){
cout<<" ";
}
for(int j=1; j<=i; j++){
    cout<<"* ";
}
cout<<endl;
}
return 0;

}
