// Check whether a given year is a leap year using the ternary operator.
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    // Using the ternary operator to check if the year is a leap year
    string result = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? "Leap Year" : "Not a Leap Year";

    cout << result << endl;

    return 0;
}
