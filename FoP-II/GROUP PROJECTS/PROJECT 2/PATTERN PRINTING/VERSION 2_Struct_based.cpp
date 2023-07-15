#include <iostream>
using namespace std;

struct PatternPrinter {
  int n;

  bool isValidInput() {
    return n >= 1;
  }

  void printUpperPattern() {
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

  void printLowerPattern() {
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
};

int main() {
  PatternPrinter printer;
  bool validInput = false;

  while (!validInput) {
    cout << "Enter a positive integer: ";
    cin >> printer.n;

    if (printer.isValidInput()) {
      validInput = true;
    } else {
      cout << "Invalid input. Please enter a positive integer.\n";
    }
  }

  printer.printUpperPattern();
  printer.printLowerPattern();

  return 0;
}


