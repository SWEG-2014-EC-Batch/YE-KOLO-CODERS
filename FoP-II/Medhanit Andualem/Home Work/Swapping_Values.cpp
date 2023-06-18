#include <iostream>
using namespace std;

void swapValues(int &num1, int &num2, int &num3)
{
    if (num1 > num2 && num1 > num3)
    {
        if (num3 > num2)
        {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
    }
    else if (num2 > num1 && num2 > num3) 
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;

        if (num3 > num2) 
        {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
    }
    else if (num3 > num1 && num3 > num2) 
    {

        int temp = num1;
        num1 = num3;
        num3 = temp; 
        if (num3 > num2)
        {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
    }
}
int main()
{
    int firstNum, secondNum, thirdNum;

    cout << "Enter Three Numbers: " << endl;
    cin >> firstNum >> secondNum >> thirdNum;

    cout << "First Number Before Swap: " << firstNum << endl;
    cout << "Second Number Before Swap: " << secondNum << endl;
    cout << "Third Number Before Swap: " << thirdNum << endl;

    swapValues(firstNum, secondNum, thirdNum);

    cout << "First Number After Swap: " << firstNum << endl;
    cout << "Second Number After Swap: " << secondNum << endl;
    cout << "Third Number After Swap: " << thirdNum << endl;
}
