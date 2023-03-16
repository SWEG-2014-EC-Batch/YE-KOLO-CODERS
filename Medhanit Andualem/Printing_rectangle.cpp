#include<iostream>
using namespace std;

int main()
{
    int i, j, x, y;
    cout<<"Enter Length";
    cin>>x;
    cout<<"Enter Width";
    cin>>y;
    for( int i=1; i<=x; i++ )
    {
        for( char j=1; j<=y; j++)
    {
        cout<<"* ";
    }
        cout<<endl;
    }
    return 0;
}
