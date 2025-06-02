// Print letter Q in a pattern.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the letter Q: ";
    cin >> n;

    // Print the top part of 'Q'
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    // Print the middle part of 'Q'
    for (int i = 0; i < n - 2; i++) {
        cout << "*";
        for (int j = 0; j < n - 2; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    // Print the bottom part of 'Q'
    for (int i = 0; i < n / 2; i++) {
        cout << " ";
    }
    cout << "*" << endl;

    return 0;
}
