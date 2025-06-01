// .Write a program that repeatedly asks the user to enter a positive number until they do so. Use a while loop.
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Please enter a positive number: ";
    cin >> number;

    while (number <= 0) {
        cout << "That's not a positive number. Please try again: ";
        cin >> number;
    }

    cout << "Thank you! You entered a positive number: " << number << endl;

    return 0;
}
