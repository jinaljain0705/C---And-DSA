/*
print letter A in a pattern.
*/
#include <iostream>
using namespace std;

int main() {
    int i, j;
    int rows = 5;
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= rows / 2; j++) {
            if (((j == 0 || j == rows / 2) && i != 0) ||  
                (i == 0 && j != 0 && j != rows / 2) ||    
                (i == rows / 2))                          
            {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
