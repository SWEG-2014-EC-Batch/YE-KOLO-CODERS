#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("Sheet5Ex5.cpp");
    if (!file) 
    {
        cerr << "Error: Could not open file." << endl;
        return 1;
    }

    int counts[26] = {0};
    char c;
    while (file.get(c))
    {
        if (c >= 'a' && c <= 'z')
        {
            counts[c - 'a']++;
        }
    }

    cout << "CHARACTER OCCURRENCES" << endl;
    for (int i = 0; i < 26; i++) 
    {
        cout << static_cast<char>('a' + i) << " " << counts[i] << endl;
    }

    file.close();

    return 0;
}
