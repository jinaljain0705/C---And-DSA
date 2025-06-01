// Write a program to categorize a user’s grade (from 0 to 100) as A, B, C, D, or F using a while loop and if-else.
#include <iostream>
using namespace std;

int main() {
    int grade;

    cout << "Enter your grade (0-100): ";
    cin >> grade;

    while (grade < 0 || grade > 100) {
        cout << "Invalid grade. Please enter a grade between 0 and 100: ";
        cin >> grade;
    }

    if (grade >= 90) {
        cout << "Your grade is A." << endl;
    } else if (grade >= 80) {
        cout << "Your grade is B." << endl;
    } else if (grade >= 70) {
        cout << "Your grade is C." << endl;
    } else if (grade >= 60) {
        cout << "Your grade is D." << endl;
    } else {
        cout << "Your grade is F." << endl;
    }

    return 0;
}
