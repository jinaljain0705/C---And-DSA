// Display the number of days in a month based on month number using switch case.
#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            cout << "31 days" << endl;
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            cout << "30 days" << endl;
            break;
        case 2: // February
            cout << "28 days (29 in leap years)" << endl;
            break;
        default:
            cout << "Invalid month number!" << endl;
    }

    return 0;
}
