// Array Of Pointer
/*
    Means we have to create any array of multiple pointers.
    Each pointer have allocated memory addresses of array 
    or string elements separately. 
*/

#include <iostream>
using namespace std;

int main(){

    int a[5] ={45, 23, 89, 67, 12};
    int *p[5]; // *p[0], *p[1], *p[2], *p[3], *p[4]
    
    int i;

    for(i = 0; i <= 4; i++){

        p[i] = &a[i];
    }

    for(i = 0; i <= 4; i++){

        cout << "Address value: " << p[i] << " " << *p[i] << endl;
    }

    return 0;
}
