// Write a program that counts down from 10 to 1 and prints each number using a for-while loop.
#include <iostream>
using namespace std;

int main() {
    int count = 10;

    // Using a for-while loop to count down from 10 to 1
    for (; count >= 1; ) {
        cout << count << endl; 
        count--;               
    }

    return 0;
}
