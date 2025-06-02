// Print letter T in a pattern.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the letter T: ";
    cin >> n;

    // Print the top part of 'T'
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    // Print the middle part of 'T'
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n / 2; j++) {
            if (j == n / 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
