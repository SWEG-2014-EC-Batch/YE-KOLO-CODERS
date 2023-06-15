#include <iostream>
using namespace std;

double maximum(double x, double y)
{
    return (x>y)? x:y;
}

double maximum(double x, double y, double z)
{
   if(x>y)
   {
    if(x>z)
    {
      return x;
    }
    else if(x<z)
    {
      return z;
    }
   }
   else if(y>x)
   {
    if(y>z)
    {
      return y;
    }
    else if(y<z)
    {
      return z;
    }
   }
}

int main() {
    double x, y, z;
    cout << "Enter the number of elements you want to compare: ";
    cin >> x >> y >> z;
    cout << "The maximum of " << x << " and " << y << " is " << maximum(x, y) << endl;
    cout << "The maximum of " << x << ", " << y << ", and " << z << " is " << maximum(x, y, z) << endl;
    return 0;
}
