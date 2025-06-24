// Function Calling
/*
    Function calling can be of mainly two types such as: 

    1. Call by value
    2. Call by reference
    3. Call by const reference
*/
#include <iostream>
using namespace std;

void square(int n){

    cout << "Square is " << n * n << endl;
}

void hey(int &n){

    n = n + 10;
}

void increment(const int &n){

    n = n + 10; // can not modify
}

int main(){

    int a = 7;

    square(a); // call by value

    cout << "Before: " << a << endl;

    hey(a); // call by reference

    cout << "After, a: " << a << endl;

    cout << "Before, a: " << a << endl;

    increment(a); // call by Const Reference

    cout << "After: " << a << endl;

    return 0;
}
