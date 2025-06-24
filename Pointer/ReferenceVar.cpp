// Reference Variable
/*
    A reference variable is an alias or alternative name foe an ecisting variable.
    - It allows you to access the same memory location using different names. 
    Unlike pointers, reference variables cannot be null and must be initialized when declared. 
    - They provide a convenient way to pass variable to functions without making copies,
    which can improve performance and reduse memory usage. 
*/
#include <iostream>
using namespace std;

int main(){

    int arya = 100;
    int &aru = arya; // deep copy (reference variable)
    int raj = arya; // shallow copy

    cout << arya << "& " << aru << endl;
    cout << arya << "& " << raj << endl;
    
    aru = 600;

    cout << "Deep copy: " << arya << "& " << aru << endl;
    cout << "Shallow copy: " << arya << "& " << aru << endl;

    return 0;
}