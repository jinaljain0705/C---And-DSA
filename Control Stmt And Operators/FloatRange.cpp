// WAP to Determine if a float number is within the range 0.0 to 1.0.
#include <iostream>
using namespace std;

int main() {
    float num;
    cout << "Enter a float number: ";
    cin >> num;

    if (num >= 0.0 && num <= 1.0) {
        cout << "The number is within the range 0.0 to 1.0." << endl;
    } else {
        cout << "The number is not within the range 0.0 to 1.0." << endl;
    }

    return 0;
}
