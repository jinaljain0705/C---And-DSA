// Check whether a character is uppercase or lowercase using the ternary operator.
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Using the ternary operator to check if the character is uppercase or lowercase
    string result = (ch >= 'A' && ch <= 'Z') ? "Uppercase" : 
                    (ch >= 'a' && ch <= 'z') ? "Lowercase" : 
                    "Not an alphabet";

    cout << "The character is: " << result << endl;

    return 0;
}
