#include <iostream>
using namespace std;
 int n;
double array(double a[]);

int main(){
   
    double a[5];
    cout << "Enter 5 numbers: ";
    for (int num = 0; num < 5; num++) {
        cin >> a[num];
    }
    cout << array(a) << endl;
    return 0;
}

double array(double a[]) {
    cout << "the first element = "<< a[0] << ", "<<"the last element = " << a[5-1] << endl<<"Sum = ";
    return a[0] + a[5-1];
}
