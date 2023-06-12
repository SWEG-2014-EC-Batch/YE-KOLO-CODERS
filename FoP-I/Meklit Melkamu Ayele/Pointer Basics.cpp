#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;

    cout << "number: " << num<< endl;
    cout << "Pointer: " << ptr << endl;
    cout << "Dereferenced Pointer: " << *ptr << endl;

    return 0;
}
