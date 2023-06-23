#include <iostream>
using namespace std;
int  arraySum(int,int);

int arraySum(int Array[], int size)
{

if (size<0)
{
    return 0;
}
else
{
return (Array[size]+arraySum(Array,size-1));
}


}

int main()
{

    int size;

    cout << "Enter number of elements:";
    cin >> size;

    int Array[size];

    cout << "Enter elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> Array[i];
    }

   cout<<"Sum="<< arraySum(Array, size);
}