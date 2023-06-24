#include <iostream>
#include <cmath>
using namespace std;

bool primeChecker(int);
bool primeChecker(int number)
{

    if (number <= 1 || number > 1000)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

        int value;
        cout << "Enter A Number:" << endl;
        cin >> value;
        int result = primeChecker(value);
        cout << result << endl;
    
}
