#include <iostream>
using namespace std;

int powerCalculator(int, int);
int powerCalculator(int num, int power)
{
    if (power == 0)
    {
        return (1);
    }
    else if (power == 1)
    {
        return (num);
    }
    else
        return (num * powerCalculator(num, power - 1)); 
       
}

int main()
{
    int n;
    int p;

    cout << "Enter a number:";
    cin >> n;
    cout << "Enter the power:";
    cin >> p;
    cout << "Result:" << powerCalculator(n, p) << endl;
}
