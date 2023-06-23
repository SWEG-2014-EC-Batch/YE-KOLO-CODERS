#include <iostream>
using namespace std;

int fibonacciTerm(int);
int fibonacciTerm(int term)
{
    if(term==1)
    {
        return 0;
    }
    else if(term==2)
    {
 return 1;
    }
    else
    {
        return(fibonacciTerm(term-1)+fibonacciTerm(term-2));
    }
}

int main()
{

    int n;
    cout << "Enter the term of the sequence:";
    cin >> n;

cout<<"The "<<n<<"th term of the sequence is: "<<fibonacciTerm(n)<<endl;

}