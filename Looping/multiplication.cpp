// Write a program that prints the multiplication table of 5 (from 5x1 to 5x10) using a while loop.
#include <iostream>
using namespace std;

int main() {
    int number = 5; 
    int i = 1;     

    // Using a while loop to print the multiplication table of 5
    while (i <= 10) {
        cout << number << " x " << i << " = " << number * i << endl;
        i++; // Increment i
    }

    return 0;
}
