#include <iostream>
#include <cstdarg>
#include "new.h"

using namespace std;

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
