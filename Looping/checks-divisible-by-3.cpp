// Write a program that checks if a given number is divisible by 3 using a while loop.
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is divisible by 3
    while (number % 3 != 0) {
        cout << "The number is not divisible by 3. Please enter another number: ";
        cin >> number;
    }

    cout << "The number " << number << " is divisible by 3." << endl;

    return 0;
}
