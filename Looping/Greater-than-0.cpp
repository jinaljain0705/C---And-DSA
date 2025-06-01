// Write a program that repeatedly asks the user to enter a number until they enter a number greater than 0 using for-loop.
#include <iostream>
using namespace std;

int main() {
    int number;

    // Using a for loop to repeatedly ask for a number
    for (;;) { 
        cout << "Enter a number greater than 0: ";
        cin >> number;

        // Check if the number is greater than 0
        if (number > 0) {
            cout << "You entered: " << number << endl;
            break; 
        } else {
            cout << "Please try again." << endl;
        }
    }

    return 0;
}
