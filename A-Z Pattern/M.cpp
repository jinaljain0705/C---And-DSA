// Print letter M in a pattern.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the letter M: ";
    cin >> n;

    // Print the top part of 'M'
    for (int i = 0; i < n; i++) {
        cout << "*";
        for (int j = 0; j < n - 1; j++) {
            if (j == 0 || j == n - 1 || (i == j && i <= n / 2) || (i + j == n - 1 && i <= n / 2)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

