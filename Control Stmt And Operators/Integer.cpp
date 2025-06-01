//  WAP to Verify if an integer is even.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "The integer is even." << endl;
    } else {
        cout << "The integer is not even." << endl;
    }

    return 0;
}
