#include <iostream>
using namespace std;


void arrayFunction(double a[], int size)
{
    cout<<"First element:"<<a[0]<<endl;
  cout<<"Last element:"<<a[size-1]<<endl;
  cout<<"Sum="<<a[0]+a[size-1]<<endl;
}




int main()
{
    
    int num;


    cout<<"Enter Number of elements:";
    cin>>num; 
    
      double array_1[num];
    cout<<"Enter elements of the array:";
    
    for(int i=0;i<num;i++)
    {
        cin>>array_1[i];
    }

     arrayFunction(array_1, num);

}
