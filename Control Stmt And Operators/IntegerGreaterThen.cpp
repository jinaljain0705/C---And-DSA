// WAP to Find if an integer is greater than 50 or less than 50.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num > 50) {
        cout << "The integer is greater than 50." << endl;
    } else if (num < 50) {
        cout << "The integer is less than 50." << endl;
    } else {
        cout << "The integer is equal to 50." << endl;
    }

    return 0;
}
