#include <iostream>
#include "PatternPrinter.h"
using namespace std;

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
