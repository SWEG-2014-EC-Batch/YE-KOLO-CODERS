#include <iostream>
#include <cassert>
using namespace std;

void scale(double scaleFactor, double &value_1, double value_2)
{

    cout << "THE FIRST VALUE BEFORE  SCALING: " << value_1 << "; AFTER SCALING: " << value_1 * scaleFactor << endl;
    cout << "THE SECONG VALUE BEFORE SCALING: " << value_2 << "; AFTER SCALING: " << value_2 * scaleFactor << endl;
}
int main()
{
    double value, num_1, num_2;
    cout << "ENTER THE SCALING VALUE: ";
    cin >> value;

    assert(value != 0);

    cout << "ENTER THE FIRST VALUE: ";
    cin >> num_1;

    cout << "ENTER THE SECOND VALUE: ";
    cin >> num_2;

    scale(value, num_1, num_2);
}
