#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isupper(ch)) {
        cout << "Uppercase letter" << endl;
    } 
    else if (islower(ch)) {
        cout << "Lowercase letter" << endl;
    } 
    else {
        cout << "Not a letter" << endl;
    }

    return 0;
}