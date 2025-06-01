// Check if a character is a digit, alphabet, or special character using nested ternary.
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Using nested ternary operators to check the type of character
    string result = (ch >= '0' && ch <= '9') ? "Digit" :
                    (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ? "Alphabet" :
                    "Special Character";

    cout << "The character is: " << result << endl;

    return 0;
}
