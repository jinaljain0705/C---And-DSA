// Write a program that prints the squares of numbers from 1 to 5 using a do-while loop.
#include <iostream>
using namespace std;

int main() {
    int number = 1;

    do {
        cout << "Square of " << number << " is " << number * number << endl;
        number++;
    } while (number <= 5);

    return 0;
}

