#include<iostream>
using namespace std;
struct coordinate
{
    int x,y;
};
coordinate read()
{
    coordinate points;
    cout<<"ENTER THE X COORDINATE:";
    cin>>points.x;
    cout<<"ENTER THE Y COORDINATE:";
    cin>>points.y;
    return points;
    
};
void print(coordinate points)
{
    cout<<"THE COORDINATE POINTS ARE:"<<points.x<<" and "<<points.y<<endl;
}
int main()
{
    coordinate points=read();
    print(points);
    return 0;
}
