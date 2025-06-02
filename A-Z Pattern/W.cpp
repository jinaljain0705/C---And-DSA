// Print letter W in a pattern.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the letter W: ";
    cin >> n;

    if (n < 3) {
        cout << "Height must be at least 3." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || (i == j && i >= n / 2) || (i + j == n - 1 && i >= n / 2)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
