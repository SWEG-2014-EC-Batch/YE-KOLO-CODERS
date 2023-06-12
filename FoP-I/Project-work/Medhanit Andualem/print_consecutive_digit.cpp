#include<iostream>
using namespace std;
int main(){
int n=19, k=10;
for(int i=10; i<=19; i++)
{
for(int j=10; j<=19; j++){
cout<<k++<<" ";
}
if(k>49){
    break;
}
cout<<endl;
}
return 0;
}
