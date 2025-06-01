// Find the largest among three numbers using nested ternary operators.
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Using nested ternary operators to find the largest number
    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    cout << "The largest number is: " << largest << endl;

    return 0;
}
