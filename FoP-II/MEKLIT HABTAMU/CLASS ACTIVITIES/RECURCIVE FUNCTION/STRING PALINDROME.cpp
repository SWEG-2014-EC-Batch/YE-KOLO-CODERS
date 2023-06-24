#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(char word[], int start, int end)
{
   
    if (start >= end) {
        return true;
    }

    
    if (word[start] == word[end]) {
        return isPalindrome(word, start + 1, end - 1);
    } else {
        return false;
    }
}

int main()
{
    char word[100];
    cout << "Enter a word: ";
    cin >> word;

    if (isPalindrome(word, 0, strlen(word) - 1)) {
        cout << word << " is a palindrome" << endl;
    } else {
        cout << word << " is not a palindrome" << endl;
    }

    return 0;
}
