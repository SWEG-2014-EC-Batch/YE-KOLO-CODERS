#include <iostream>
using namespace std;

bool isValidInput(int n) {
  return n >= 1;
}

void printUpperPattern(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3 * n - 3 - 2 * i; j++) {
      cout << "*";
    }
    for (int j = 0; j < 4 * i + 2; j++) {
      cout << " ";
    }
    for (int j = 0; j < 3 * n - 3 - 2 * i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void printLowerPattern(int n) {
  for (int i = n - 2; i >= 0; i--) {
    for (int j = 0; j < 3 * n - 3 - 2 * i; j++) {
      cout << "*";
    }
    for (int j = 0; j < 4 * i + 2; j++) {
      cout << " ";
    }
    for (int j = 0; j < 3 * n - 3 - 2 * i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
  int n;
  bool validInput = false;

  while (!validInput) {
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isValidInput(n)) {
      validInput = true;
    } else {
      cout << "Invalid input. Please enter a positive integer.\n";
    }
  }

  printUpperPattern(n);
  printLowerPattern(n);

  return 0;
}
