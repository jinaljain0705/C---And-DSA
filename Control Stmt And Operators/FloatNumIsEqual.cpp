// WAP to Check if a float number is equal to zero.
#include <iostream>
using namespace std;

int main() {
    float num;
    cout << "Enter a float number: ";
    cin >> num;

    if (num == 0.0) {
        cout << "The number is equal to zero." << endl;
    } else {
        cout << "The number is not equal to zero." << endl;
    }

    return 0;
}
