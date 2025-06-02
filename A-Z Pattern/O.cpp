// Print letter O in a pattern.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the letter O: ";
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

    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    return 0;
}
