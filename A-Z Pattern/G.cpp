// Print letter G in a pattern.
#include <iostream>
using namespace std;

int main() {
    int rows = 7;  

    for (int i = 0; i < rows; i++) {
        cout << " *"; 
        for (int j = 0; j < rows; j++) {
            if (i == 0 || i == rows - 1 || i == rows / 2 || (j == 0 && i > 0) || (j == rows - 1 && i >= rows / 2))
                cout << "*";
            else 
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
