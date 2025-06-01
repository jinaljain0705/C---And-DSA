// Write a program that calculates the factorial of a number entered by the user using a while loop.
#include <iostream>
using namespace std;

int main() {
    int number;
    long long factorial = 1; 

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1; 
    }

    int count = 1; 
    while (count <= number) {
        factorial *= count; 
        count++; 
    }

    cout << "The factorial of " << number << " is: " << factorial << endl;

    return 0;
}
