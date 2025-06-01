/*
    Print letter Cin a pattern.
*/
#include <iostream>
using namespace std;

int main() {
    int rows = 7; 

    for (int i = 0; i < rows; i++) {
        if (i == 0 || i == rows - 1) {
            
            cout << " ****";
        } else {
            
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
