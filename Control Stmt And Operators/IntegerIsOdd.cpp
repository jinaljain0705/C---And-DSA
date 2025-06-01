// WAP to Check if an integer is odd.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 != 0) {
        cout << "The integer is odd." << endl;
    } else {
        cout << "The integer is not odd." << endl;
    }

    return 0;
}
