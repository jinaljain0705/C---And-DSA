// Print letter X in a pattern.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the letter X: ";
    cin >> n;

    if (n < 3) {
        cout << "Height must be at least 3." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == n - 1 - i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
