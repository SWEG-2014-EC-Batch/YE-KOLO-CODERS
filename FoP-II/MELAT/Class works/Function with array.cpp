#include <iostream>
using namespace std;

void sum(double arr[],int size)
{
  cout<<"FIRST ELEMENT:"<<arr[0]<<endl;
  cout<<"SECOND ELEMENT:"<<arr[size-1];
  cout<<"THE SUM OF THE FIRST AND AST ELEMENTS IS:"<<arr[0]+arr[size-1];

}
int main()
{
  int size;
  cout<<"ENTER THE SIZE OF THE ARRAY:";
  cin>>size;
  
  double arr[size];
  for( int i=0;i<=size;i++)
  {
    cout<<"ENTER THE"<<" "<<i+1<<"element";
    cin>>arr[i];
  }
  sum( arr,size);

  return 0;
