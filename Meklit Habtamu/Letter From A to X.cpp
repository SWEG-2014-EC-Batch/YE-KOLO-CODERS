#include <iostream>

using namespace std;

int main()
{
    char alphabet='A';
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=6;j++)
            cout<<alphabet++;
        cout<<endl;
    }



    return 0;
}
