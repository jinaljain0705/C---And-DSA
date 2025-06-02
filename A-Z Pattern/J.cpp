// Print letter 'J' in a pattern.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the letter J: ";
    cin >> n;

    // Print the top part of 'J'
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    // Print the middle part of 'J'
    for (int i = 0; i < n - 2; i++) {
        cout << " ";
        for (int j = 0; j < n - 2; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    // Print the bottom part of 'J'
    for (int i = 0; i < n / 2; i++) {
        cout << " ";
    }
    cout << "*" << endl;

    return 0;
}
