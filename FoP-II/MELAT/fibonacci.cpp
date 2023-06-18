#include <iostream>
using namespace std;

int fibonacci(int max = 10);
int fibonacci(int max)
{
    int a1 = 1;
    int a2 = 1;
    int next_term = 0;

    cout << "Fibonacci Series: ";
    cout << a1 << ", " << a2 << ", ";
    for (int i = 3; i <= max; i++)
    {

        next_term = a1 + a2;
        a1 = a2; 
        a2 = next_term;  
        
        cout << ", "<< next_term ;
    }
}
int main()
{
    int num;
    int choice;
    cout << "Would You Like To Enter Maximum Number(Yes=1/N=0)?" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter Maximum Number: " << endl;
        cin >> num;
        fibonacci(num);
    }
    else
        fibonacci();
}
