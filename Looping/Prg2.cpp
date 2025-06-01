// Write a program that asks the user for a number and checks whether it is even or odd using a while loop and if-else.

#include <iostream>
using namespace std;

int main() {
    int number;
    char choice;

    while (true) {
        cout << "Enter a number: ";
        cin >> number;

        // Check if the number is even or odd
        if (number % 2 == 0) {
            cout << number << " is Even." << endl;
        } else {
            cout << number << " is Odd." << endl;
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

