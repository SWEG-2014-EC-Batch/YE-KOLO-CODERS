#include<iostream>
using namespace std;
int main()
{
int x, i, j;
cout<<"Enter height";
cin>>x;
for(int i=x; i>=1; i--){
for(int j=x; j>=1; j--){
    if(i>=j)
cout<<"* ";
else
 cout<<" ";
}
cout<<endl;
}
return 0;

}
