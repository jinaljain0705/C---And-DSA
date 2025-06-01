// Write a program that prints the first 5 multiples of 3 using a for-while loop.
#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int number = 3;

    // Using a for loop to print the first 5 multiples of 3
    for (int i = 1; i <= 5; i++) {
        cout << number * i << " ";
        count++;
    }

    cout << endl;
    return 0;
}
