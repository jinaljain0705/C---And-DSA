#include <iostream>
using namespace std;

/*
    Decimal => 0 to 9 => 156776389
    Binary => 0 & 1 => 011001110110
    Octal => 0 to 7 => 04567812307
    Hexa-decimal => 0 to 9 & a, b, c, d, e, f => 0x15643ab56e655f

*/

int main(){

    int a = 5;
    int *ptr; // pointer ptr

    ptr = &a;

    cout << "Address is " << ptr << endl;
    cout << "Value is " << *ptr; // value of ptr // *ptr
    
    return 0;
}
