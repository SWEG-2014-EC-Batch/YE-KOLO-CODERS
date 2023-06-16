
#include <iostream>

using namespace std;

void calcQuotient(double n1, double n2, double& answer) {
    answer = n1 / n2;
}

int main() {
    double num1 = 10.0;
    double num2 = 5.0;
    double quotient;

    calcQuotient(num1, num2, quotient);

    cout << "The quotient of " << num1 << " and " << num2 << " is " << quotient << endl;

    return 0;
}
