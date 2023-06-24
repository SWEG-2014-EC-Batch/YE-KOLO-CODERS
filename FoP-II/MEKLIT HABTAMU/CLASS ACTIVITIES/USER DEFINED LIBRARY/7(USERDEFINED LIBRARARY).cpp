#include <iostream>
#include <cstdarg>
#include "libraryFor7.h"
#include "MessageLibrary.h"

using namespace std;
int main()
{
    int result1 = product(3, 2, 3, 4); 
    int result2 = product(2, 5, 10);   
    int result3 = product(5, 1, 2, 3, 4, 5);
    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;
    return 0;
}
