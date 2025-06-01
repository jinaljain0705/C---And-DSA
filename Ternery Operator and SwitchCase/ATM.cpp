// Create a menu-driven program for ATM operations using switch case.
#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0; // Initial balance

    do {
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: $" << balance << endl;
                break;
            case 2: {
                double deposit;
                cout << "Enter amount to deposit: $";
                cin >> deposit;
                if (deposit > 0) {
                    balance += deposit;
                    cout << "Deposited: $" << deposit << endl;
                } else {
                    cout << "Invalid deposit amount!" << endl;
                }
                break;
            }
            case 3: {
                double withdraw;
                cout << "Enter amount to withdraw: $";
                cin >> withdraw;
                if (withdraw > 0 && withdraw <= balance) {
                    balance -= withdraw;
                    cout << "Withdrawn: $" << withdraw << endl;
                } else if (withdraw > balance) {
                    cout << "Insufficient funds!" << endl;
                } else {
                    cout << "Invalid withdrawal amount!" << endl;
                }
                break;
            }
            case 4:
                cout << "Exiting ATM. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
