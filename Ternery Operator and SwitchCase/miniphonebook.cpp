// Simulate a mini phonebook: menu-driven switch for adding, viewing, deleting contacts.
#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
};
const int MAX_CONTACTS = 100;
Contact phonebook[MAX_CONTACTS];
int contactCount = 0;
void addContact() {
    if (contactCount < MAX_CONTACTS) {
        cout << "Enter name: ";
        cin >> phonebook[contactCount].name;
        cout << "Enter phone number: ";
        cin >> phonebook[contactCount].phone;
        contactCount++;
        cout << "Contact added successfully!" << endl;
    } else {
        cout << "Phonebook is full!" << endl;
    }
}
void viewContacts() {
    if (contactCount == 0) {
        cout << "No contacts available." << endl;
    } else {
        cout << "Contacts:" << endl;
        for (int i = 0; i < contactCount; i++) {
            cout << i + 1 << ". " << phonebook[i].name << " - " << phonebook[i].phone << endl;
        }
    }
}
void deleteContact() {
    if (contactCount == 0) {
        cout << "No contacts to delete." << endl;
        return;
    }
    int index;
    cout << "Enter contact number to delete (1-" << contactCount << "): ";
    cin >> index;
    if (index < 1 || index > contactCount) {
        cout << "Invalid contact number!" << endl;
        return;
    }
    for (int i = index - 1; i < contactCount - 1; i++) {
        phonebook[i] = phonebook[i + 1];
    }
    contactCount--;
    cout << "Contact deleted successfully!" << endl;
}
int main() {
    int choice;
    do {
        cout << "\nPhonebook Menu:\n";
        cout << "1. Add Contact\n";
        cout << "2. View Contacts\n";
        cout << "3. Delete Contact\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                viewContacts();
                break;
            case 3:
                deleteContact();
                break;
            case 4:
                cout << "Exiting phonebook. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
