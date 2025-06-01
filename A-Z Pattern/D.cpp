/*
    print letter D in a pattern.
*/
#include <iostream>
using namespace std;

int main() {
    int rows = 7;  

    for (int i = 0; i < rows; i++) {
        cout << " *"; 
        for (int j = 0; j < rows; j++) {
            
            if ((i == 0 || i == rows - 1) && j < rows - 2)
                cout << "*";
            else if (j == rows - 2 && i != 0 && i != rows - 1)
                cout << "*";
            else 
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

