#include <iostream>
#include <cassert>
using namespace std;

void scale(double scaleFactor, double& value1, double& value2)
{

    cout << "THE FIRST VALUE BEFORE SCALING: " << value1 << "; AFTER SCALING: " << value1 * scaleFactor << endl;
    cout << "THE SECOND VALUE BEFORE SCALING: " << value2 << "; AFTER SCALING: " << value2 * scaleFactor << endl;
}

int main()
{
    double scaleFactor, value1, value2;
    cout << "ENTER THE SCALING VALUE: ";
    cin >> scaleFactor;

    assert(scaleFactor >0);

    cout << "ENTER THE FIRST VALUE: ";
    cin >> value1;

    cout << "ENTER THE SECOND VALUE: ";
    cin >> value2;

    scale(scaleFactor, value1, value2);

    return 0;
}
