// Print letter R in a pattern.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the letter R: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    for (int i = 0; i < n - 2; i++) {
        cout << "*";
        for (int j = 0; j < n - 2; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    for (int i = 0; i < n / 2; i++) {
        cout << "*";
        for (int j = 0; j < n - 2; j++) {
            if (j == n - 2 - i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
