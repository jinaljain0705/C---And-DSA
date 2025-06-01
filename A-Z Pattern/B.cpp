/*
    print letter B in a pattern.
*/
#include <iostream>
using namespace std;

int main() {
    int i, j;
    int rows = 7; 

    for (i = 0; i < rows; i++) {
        cout << "*"; 

        
        if (i == 0 || i == rows / 2 || i == rows - 1) {
            for (j = 0; j < 4; j++) 
            cout << "*";
        }
        
        else {
            for (j = 0; j < 3; j++) 
            cout << " ";
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
