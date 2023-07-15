#include "PatternPrinter.h"
#include <iostream>
using namespace std;

bool PatternPrinter::isValidInput() {
  return n >= 1;
}

void PatternPrinter::printUpperPattern() {
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

void PatternPrinter::printLowerPattern() {
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


