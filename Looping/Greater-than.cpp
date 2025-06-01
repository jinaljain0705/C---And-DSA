// Write a program that asks the user to enter a number and prints whether the number is greater than 10 or not using a while loop.
#include <iostream>
using namespace std;

int main() {
    int number;
    char choice;

    while (true) {
        cout << "Enter a number: ";
        cin >> number;

        // Check if the number is greater than 10
        if (number > 10) {
            cout << number << " is greater than 10." << endl;
        } else {
            cout << number << " is not greater than 10." << endl;
        }

        // Ask user if they want to continue
        cout << "Do you want to enter another number? (y/n): ";
        cin >> choice;

        // Exit the loop if user enters 'n' or 'N'
        if (choice == 'n' || choice == 'N') {
            cout << "Exiting the program." << endl;
            break;
        }
    }

    return 0;
}
