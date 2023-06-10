#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double, double);

double side1, side2;
double hypo;

double hypotenuse(double, double)
{
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            side1 = 3.0;
            side2 = 4.0;
        }
        else if (i == 1)
        {
            side1 = 5.0;
            side2 = 12.0;
        }
        else if (i == 2)
        {
            side1 = 8.0;
            side2 = 15.0;
        }
        else
        {
            break;
        }
        hypo = sqrt(pow(side1, 2) + pow(side2, 2));
        cout << "The hypotenuse of the triangle with sides: " << side1 << ", " << side2 << " is: " << hypo << endl;
    }
}
int main()
{
    hypotenuse(side1, side2);
    return 0;
}
