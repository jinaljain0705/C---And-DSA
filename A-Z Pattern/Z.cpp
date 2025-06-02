// Print letter Z in a pattern.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the letter Z: ";
    cin >> n;

    if (n < 3) {
        cout << "Height must be at least 3." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (j == n - 1 - i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    return 0;
}
