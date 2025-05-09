/*
    * * * * *
      * * * *
        * * *
          * *
            *  
*/
#include <iostream>
using namespace std;

int main(){
    int i, j, k;
    int n = 5; 
    for (i = 0; i < n; i++) {

        // Print leading spaces
        for (j = 0; j < i; j++) {
            cout << "  ";

        }
        // Print stars
        for (k = n - i; k > 0; k--) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
