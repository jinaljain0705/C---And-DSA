// Write a program to print all even numbers between 1 and 20 using a while loop.
#include <iostream>
using namespace std;

int main() {
    int number = 2; 

    cout << "Even numbers between 1 and 20 are: ";
    
    while (number <= 20) {
        cout << number << " "; 
        number += 2;           
    }

    cout << endl; 
    return 0;
}
