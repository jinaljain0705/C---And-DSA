// WAP to Determine if an integer is divisible by 3.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 3 == 0) {
        cout << "The integer is divisible by 3." << endl;
    } else {
        cout << "The integer is not divisible by 3." << endl;
    }

    return 0;
}
