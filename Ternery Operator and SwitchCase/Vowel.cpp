// Check whether an input character is a vowel or consonant using switch case.
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Convert character to lowercase for uniformity
    ch = tolower(ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << ch << " is a vowel." << endl;
            break;
        default:
            if ((ch >= 'a' && ch <= 'z')) {
                cout << ch << " is a consonant." << endl;
            } else {
                cout << "Invalid input! Please enter an alphabet." << endl;
            }
    }

    return 0;
}
