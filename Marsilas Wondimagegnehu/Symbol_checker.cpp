#include<iostream>
#include <cctype>
using namespace std;

int main(){
    char key;
    cout << "Enter any 1 character from your keyboard: ";
    cin >> key;

    if (isalpha(key)){
        if(isupper(key)){
          //  cout << "You have entered an uppercase or a capital letter";
            switch (key){
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                cout << "You have entered an uppercase vowl";
                break;
                default: 
                    cout << "You have entered an uppercase consonant";
            }
        }else if(islower(key)){
         //   cout << "You have entered a lowercase or a small letter";
            switch (key){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                cout << "You have entered a lowercase vowl";
                break;
                default: 
                    cout << "You have entered a lowercase consonant";
            }
        }
    }else if(isdigit(key)){
        if(key % 2 == 0){
            cout << "You have entered an even digit";
        }else if(key % 2 != 0){
            cout << "You have entered an odd digit";
        }
    }else {
        cout << "You have entered a special character";
    }
}
