// WAP to Determine if a number is even.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is not even." << endl;
    }

    return 0;
}
