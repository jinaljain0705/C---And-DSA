/*WAP to check if a number is positive, negative, or zero.*/
/*
Algorithm:
1. Start the program.
2. Declare a variable 'num' to store the number.
3. Prompt the user to enter a number and read it into 'num'.
4. Check if 'num' is greater than 0:
   a. If true, print "The number is positive."
5. Check if 'num' is less than 0:
   a. If true, print "The number is negative."
6. Check if 'num' is equal to 0:
   a. If true, print "The number is zero."
*/
#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}

