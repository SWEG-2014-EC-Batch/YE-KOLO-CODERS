#include <iostream>
using namespace std;

int main() {

    int rows=5;

    for(int i = 1, k = 0; i <= rows; i++, k = 0) {
        for(int r = 1; r<= rows-i; r++) {
            cout <<"  ";
        }

        while(k != 2*i-1) 
        {
            cout << "* ";
            ++k;
        }
         cout << endl;
    }
    return 0;

}
