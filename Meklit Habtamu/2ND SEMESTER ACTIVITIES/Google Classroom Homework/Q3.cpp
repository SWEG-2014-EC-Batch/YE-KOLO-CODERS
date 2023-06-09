#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double, double);

double side1, side2;
double hypo;

double hypotenuse(double, double)
{
           cout<<"Enter The Sides Of The Triangle: "<<endl;
           cin>>side1>>side2;
            hypo = sqrt(pow(side1, 2) + pow(side2, 2));
            return (hypo);
}
int main()
{
    hypo = hypotenuse(side1, side2);

        cout << "The Hypotenuse Of The Triangle is: " << hypo << endl;
   
}
