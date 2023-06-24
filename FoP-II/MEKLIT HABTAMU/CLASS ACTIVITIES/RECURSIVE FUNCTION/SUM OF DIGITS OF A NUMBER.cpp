#include <iostream>
using namespace std;


int sumOfDigits(int); 
int sumOfDigits(int num) 
{
    if (num == 0) {
        return 0;
    } else {
        int lastDigit = num % 10;
        int remainingNum = num / 10;
        return lastDigit + sumOfDigits(remainingNum);
    }
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int sum = sumOfDigits(number);
    cout << "The sum of the digits of " << number << " is " << sum << endl;
    return 0;
}
