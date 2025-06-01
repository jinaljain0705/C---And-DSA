// Write a program that prints the first 10 multiples of a number entered by the user using a while loop.
#include <iostream>
using namespace std;

int main() {
    int number, count = 1;

    cout << "Enter a number: ";
    cin >> number;

    cout << "The first 10 multiples of " << number << " are: ";

    while (count <= 10) {
        cout << number * count << " ";
        count++;
    }

    cout << endl; 
    return 0;
}
