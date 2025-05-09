/*
    1 2 3 4 5 
    1 2 3 4 
    1 2 3 
    1 2 
    1
*/
#include <iostream>
using namespace std;

int main() {
    // Outer loop: rows from 5 to 1
    for (int i = 5; i >= 1; i--) {  

        // Inner loop: print numbers from 1 to i          
        for (int j = 1; j <= i; j++) {          
            cout << j << " ";
        }
        cout << endl;                         
    }
    return 0;
}