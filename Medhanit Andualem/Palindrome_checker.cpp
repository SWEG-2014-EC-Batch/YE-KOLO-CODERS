#include<iostream>
using namespace std;
int main() {
    int num = 0;
    int rev = 0;

    cout<<"Enter a number";
    cin >>num;

    int temp = num;

    while(temp != 0){
        int remainder = temp % 10;
        rev = rev * 10 + remainder;
        temp /= 10;
    }

    if(num == rev)
    {
        cout<<"yes it is a palindrom";
    }
    else
    {
        cout << "no it's not a palindrom";
    }

    return 0;
}
