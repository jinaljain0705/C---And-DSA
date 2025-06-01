// WAP to Determine if an integer is a multiple of 7.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 7 == 0) {
        cout << "The integer is a multiple of 7." << endl;
    } else {
        cout << "The integer is not a multiple of 7." << endl;
    }

    return 0;
}
