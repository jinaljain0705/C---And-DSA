// WAP to Check if an integer is positive, negative, or zero.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num > 0) {
        cout << "The integer is positive." << endl;
    } else if (num < 0) {
        cout << "The integer is negative." << endl;
    } else {
        cout << "The integer is zero." << endl;
    }

    return 0;
}
