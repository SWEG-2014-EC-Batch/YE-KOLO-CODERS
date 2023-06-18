#include <iostream>
using namespace std;

void swap(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

void arrange(int &a, int &b, int &c) 
{
    if (a < b) 
    {
        swap(a, b);
    }
    if (a < c) 
    {
        swap(a, c);
    }
    if (b < c) 
    {
        swap(b, c);
    }
}

int main() 
{
    int firstNum = 10, secondNum = 20, thirdNum = 30;
    cout << "BEFORE ARRANGEMENT: " << firstNum << " " << secondNum << " " << thirdNum << endl;
    arrange(firstNum, secondNum, thirdNum);
    cout << "AFTER ARRANGEMENT: " << firstNum << " " << secondNum << " " << thirdNum << endl;

    return 0;
}
