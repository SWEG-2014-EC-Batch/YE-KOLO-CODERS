#include <iostream>
#include <cmath>
using namespace std;

double calc(double, double);

double num1, num2;
double cube;
double square;

double calc(double cube, double square)
{
    cube = pow(num1, 3);
    square = pow(num2, 2);

    return (cube + square);
}

int main()
{

    cout << "Enter Two Numbers:" << endl;
    cin >> num1 >> num2;

    double answer;
    answer = calc(num1, num2);
    cout << "Answer=" << answer << endl;
}
