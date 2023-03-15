#include <iostream>

using namespace std;

int main()
{
   for(int i=1;i<=6;i++)
   {
       for(int k=6-i;k>0;k--)
        cout<<" ";
       for(int j=1;j<=i;j++)
        cout<<"* ";
        cout<<endl;
   }





    return 0;
}
