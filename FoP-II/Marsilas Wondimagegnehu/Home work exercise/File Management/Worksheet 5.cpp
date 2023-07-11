#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream infile("data.txt");
    if (!infile) {
        cerr << "Error: could not open file for reading" << endl;
        return 1;
    }
    int count, num;
    double sum, avg;
    while (infile >> count) {
        sum = 0.0;
        for (int i = 0; i < count; i++) {
            infile >> num;
            sum += num;
        }
        avg = sum / count;
        cout << "Average of group of " << count << " numbers: " << avg << endl;
    }
    infile.close();
    return 0;
}
