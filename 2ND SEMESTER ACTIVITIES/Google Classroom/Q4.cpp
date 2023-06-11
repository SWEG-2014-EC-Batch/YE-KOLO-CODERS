#include <iostream>
#include <cstdarg>

using namespace std;

int product(int count, ...)
{
    int result = 1;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++)
    {
        int arg = va_arg(args, int);
        result *= arg;
    }
    va_end(args);
    return result;
}

int main()
{
    int result1 = product(3, 2, 3, 4); // Output: 24
    int result2 = product(2, 5, 10);   // Output: 50
    int result3 = product(5, 1, 2, 3, 4, 5); // Output: 120
    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;
    return 0;
}
