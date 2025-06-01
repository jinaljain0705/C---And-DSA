// Print letter H in a pattern.
#include <iostream>
using namespace std;

int main() {
    int height = 7;  
    int width = 7;   
    for (int i = 0; i < height; i++) {
        // Left vertical line
        cout << "*";

        // Spaces or horizontal line in the middle
        for (int j = 1; j < width - 1; j++) {
            if (i == height / 2) {
                // Middle horizontal line
                cout << "*";
            } else {
                cout << " ";
            }
        }

        // Right vertical line
        cout << "*";

        cout << endl;
    }

    return 0;
}
