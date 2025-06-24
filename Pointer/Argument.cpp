// Argument Passing
/*
    Argument passing in a function can be many types such as: 

    1. Passing a value or a simple variable
    2. Passing an array
    3. Passing a pointer 
    4. Passing an address
*/
#include <iostream>
using namespace std;

void addition (int a, int b){

    cout << "Addition is " << a + b << endl;
}

void func(int n[]){

    cout << n[0] << endl;
}

void hey_pointer(int *ptr){

    cout << ptr << "& " << *ptr << endl;
}
void pointer(int *ptr){

    cout << ptr << "& " << *ptr << endl;
}

int main(){
    
    int x = 10, y = 50;
    int a[] = {56, 78, 31};
    int *p = &x;

    addition(5, 3); // pass by value
    addition(x, y); // passing by variable

    func(a); // Passing an array

    hey_pointer(p); // Passing a pointer

    pointer(&y); // Passing an Address

    return 0;
}


