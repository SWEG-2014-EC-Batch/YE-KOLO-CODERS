#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

vector<int> numbers = {1, 2, 4, 2, 4, 2};

int element = 4;

int numOccurrences = std::count(numbers.begin(), numbers.end(), element);

cout << element << " occurs " << numOccurrences << " times" << endl;

return 0;
}
