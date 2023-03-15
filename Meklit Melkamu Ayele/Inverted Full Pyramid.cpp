#include <iostream>

using namespace std;

int main()
{


    for(int i=6;i>=1;i--)
{
        for(int k=6-i;k>0;k--)
            cout<<" ";
        for(int j=i;j>0;j--)
            cout<<"* ";

            cout<<endl;
}


return 0;
}
