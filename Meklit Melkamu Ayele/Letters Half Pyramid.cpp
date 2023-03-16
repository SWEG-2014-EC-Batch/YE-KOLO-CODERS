#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=5;i++)
    {
     char alphabet='A';
     for(int j=1;j<=i;j++)
      cout<<alphabet++;
    cout<<endl;
    }


      return 0;
}
