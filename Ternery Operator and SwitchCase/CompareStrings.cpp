// Use ternary operator to compare two strings
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter two strings: ";
    cin >> str1 >> str2;

    // Using the ternary operator to compare the two strings
    string result = (str1 == str2) ? "Strings are equal" : "Strings are not equal";

    cout << result << endl;

    return 0;
}
