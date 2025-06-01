// WAP to Determine if a float number is greater than 100.5.
#include <iostream>
using namespace std;    

int main() {
    float num;
    cout << "Enter a float number: ";
    cin >> num;

    if (num > 100.5) {
        cout << "The number is greater than 100.5." << endl;
    } else {
        cout << "The number is not greater than 100.5." << endl;
    }

    return 0;
}
