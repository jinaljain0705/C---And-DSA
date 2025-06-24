// Chain of pointer
/*
    A pointer to a pointer is a concept where a pointer variable 
    holds the address of another pointer variable.
    - This creates a chain of indirection. 
    - Chain of pointer is also known as Pointer to Pointer. 
*/
#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int *p1 = &a; // 164578964 // Pointer
    int **p2 = &p1; // 164578968 /* Double pointer OR Pointer to Pointer OR Chain of POinter */
    
    cout << a << endl; // 5
    cout << *p1 << endl; // *p -> 164578964 -> 5
    cout << **p2 << endl; // **p -> *(*164578968) -> *164578964 -> 5

    return 0;
}
