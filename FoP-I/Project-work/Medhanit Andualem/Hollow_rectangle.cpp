#include <iostream>

using namespace std;

int main()
{
    int R, C;
    cout<<"Enter height";
    cin>>R;
    cout<<"Enter length";
    cin>>C;
    for(int i=1;i<=R;i++)
    {
        for(int j=1;j<=C;j++)
            {
             if(i==1||i==R||j==1||j==C)
                cout<<"*";
             else cout<<" ";
            }
      cout<<endl;
    }



    return 0;
}
