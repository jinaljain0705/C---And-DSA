// Write a program that asks the user to input a number and checks if it is positive or negative using a while loop and if-else using do-while loop.
#include <iostream>
using namespace std;

int main() {
    int number;

    // Using while loop
    cout << "Enter a number (while loop): ";
    cin >> number;
    while (number != 0) {
        if (number > 0) {
            cout << "The number is positive." << endl;
        } else {
            cout << "The number is negative." << endl;
        }
        cout << "Enter another number (0 to exit): ";
        cin >> number;
    }

    // Using do-while loop
    do {
        cout << "Enter a number (do-while loop, 0 to exit): ";
        cin >> number;
        if (number > 0) {
            cout << "The number is positive." << endl;
        } else if (number < 0) {
            cout << "The number is negative." << endl;
        }
    } while (number != 0);

    return 0;
}
