/*
    *
    * *
    * * *
    * * * *
    * * * * *
*/
#include <iostream>
using namespace std;

int main() {
    int i, j;
    int n;
    cout << "Enter the number of n: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
