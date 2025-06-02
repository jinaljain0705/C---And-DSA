// Print letter N in a pattern.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the letter N: ";
    cin >> n;

    // Print the top part of 'N'
    for (int i = 0; i < n; i++) {
        cout << "*";
        for (int j = 0; j < n - 1; j++) {
            if (j == n - 1 || j == i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

