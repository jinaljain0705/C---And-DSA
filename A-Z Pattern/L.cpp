// Print letter L in a pattern.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the letter L: ";
    cin >> n;

    // Print the vertical part of 'L'
    for (int i = 0; i < n - 1; i++) {
        cout << "*" << endl;
    }

    // Print the bottom part of 'L'
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    return 0;
}

