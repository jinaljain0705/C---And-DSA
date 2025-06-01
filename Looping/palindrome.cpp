// Write a program that asks the user to input a number and checks if it is a palindrome (the number reads the same forward and backward) using a while loop.
#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number; 

    // Reverse the number
    while (number > 0) {
        remainder = number % 10; 
        reversedNumber = reversedNumber * 10 + remainder; 
        number /= 10; 
    }

    // Check if the original number is equal to the reversed number
    if (originalNumber == reversedNumber) {
        cout << originalNumber << " is a palindrome." << endl;
    } else {
        cout << originalNumber << " is not a palindrome." << endl;
    }

    return 0;
}
