#include <iostream>
#include <fstream>

using namespace std;

void readFileIntoArray(const char* fileName, int* array, int* count) {
    ifstream inputFile(fileName); // Open the file for reading

    if (inputFile.is_open()) {
        int num;
        *count = 0; // Initialize count to 0

        while (inputFile >> num) { // Read integers from the file
            array[*count] = num; // Store the integer in the array
            (*count)++; // Increment count
        }

        inputFile.close(); // Close the file
    } else {
        cout << "Failed to open the file." << endl;
    }
}

int main() {
    const char* fileName = "input.txt";
    int array[100]; // Assuming the array has enough space
    int count;

    readFileIntoArray(fileName, array, &count);

    cout << "Number of entries: " << count << endl;
    cout << "Array contents: ";
    for (int i = 0; i < count; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
