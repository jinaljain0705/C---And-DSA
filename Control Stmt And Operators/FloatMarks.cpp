// WAP to Determine the grade based on float marks (A for ≥90, B for 75–89, C for 50–74, F for <50).
#include <iostream>
using namespace std;

int main() {
    float marks;
    cout << "Enter the marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 75) {
        cout << "Grade: B" << endl;
    } else if (marks >= 50) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
