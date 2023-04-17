#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;

  if (n < 1) {
    cout << "Invalid input. Please enter a positive integer.\n";
    return 0;
  }

  int totalWidth = 38; //The Total width of the pattern

  // Print the upper half of the pattern
  for (int i = 0; i < n; i++) {
    string leftStars = string(3 * n - 3 - 2 * i, '*');
    string middleSpaces = string(4 * i + 2, ' ');
    string rightStars = string(3 * n - 3 - 2 * i, '*');

    cout << leftStars << middleSpaces << rightStars << endl;
  }

  // Print the lower half of the pattern
  for (int i = n - 2; i >= 0; i--) {
    string leftStars = string(3 * n - 3 - 2 * i, '*');
    string middleSpaces = string(4 * i + 2, ' ');
    string rightStars = string(3 * n - 3 - 2 * i, '*');

    cout << leftStars << middleSpaces << rightStars << endl;
  }

  return 0;
}

