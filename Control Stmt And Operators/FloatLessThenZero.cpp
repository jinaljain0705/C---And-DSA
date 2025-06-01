// WAP to Check if a float number is less than zero.
#include <iostream>
using namespace std;

int main() {
    float num;
    cout << "Enter a float number: ";
    cin >> num;

    if (num < 0) {
        cout << "The number is less than zero." << endl;
    } else {
        cout << "The number is not less than zero." << endl;
    }

    return 0;
}
