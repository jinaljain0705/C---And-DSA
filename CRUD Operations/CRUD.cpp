/*CRUD Operations
    C - Create / Insert
    R - Read / Fetch / Iterate
    U - Update / Modify
    D - Delete / Remove
    This code demonstrates basic CRUD operations on a simple in-memory data structure.
*/

// Create a menu-driven program to perform CRUD operations on given 1D Array.

#include <iostream>
using namespace std;

// Perform CRUD operations on 1D Array
// Array, Control Structure (switch-case, loop)

int main(){

    int size;
    int pos, ele;
    cout << "Enter array size:";
    cin >> size;

    int arr[size];
    
    cout << "enter array elements:";
    for(int i=0; i<size; i++){
        cout << "Enter a[" << i << "]: ";
        cin >> arr[i]; 
    }

    cout << endl
        << endl 
        << "------------------------" << endl
        << endl;

    int choice;

    do{
        cout << "Press 1 for insert an element" << endl;
        cout << "Press 2 for read all elements" << endl;
        cout << "Press 3 for update an element" << endl;    
        cout << "Press 4 for delete an element" << endl;
        cout << "Press 5 for exit" << endl;

        cout << "Enter your choice:";
        cin >> choice;

        switch(choice){
            case 1: 
                cout << "Enter position: ";
                cin >> pos;

                cout << "Enter new element: ";
                cin >> ele;

                for(int i = size - 1; i >= pos; i-- ){
                    arr[i + 1] = arr[i];
                }
                size++;

                arr[pos] = ele;

                cout << "Element insert successfully! ";
                cout << endl;
                break;
            case 2:
                cout << "Enter position: ";
                cin >> pos;

                cout << "Enter new element: ";
                cin >> ele;

                arr[pos] = ele;

                cout << "Element updated successfully! " << endl;
                break;
            case 3:
                cout << "Enter position: ";
                cin >> pos;

                for(int i = pos; i < size; i++){
                    arr[i - 1] = arr[i];
                }
                size--;

                cout << "Element delete successfully! ";
                break;
            case 4:
                cout << endl
                    << "Array is: ";
                    for(int i = 0; i < size; i++){
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }

    } while (choice != 5);

    return 0;
}