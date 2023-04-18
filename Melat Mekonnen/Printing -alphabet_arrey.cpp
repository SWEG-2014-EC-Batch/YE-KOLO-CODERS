#include <iostream>

using namespace std;

int main(){
{
    int uppercase[26];
    int lowercase[26];

    for(int i=0;i<=26;i++)
{
     lowercase[i]='a'+i;
     uppercase[i]='A'+i;

}
    for(int i=0;i<=26;i+=5)
{
    for(int j=0;j<5;j++)

{
     cout<<(char)uppercase[i+j]<<(char)lowercase[i+j]<<'\t';
     if(i==25)

     break;

}



    cout<< endl;}



