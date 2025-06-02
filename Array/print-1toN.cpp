//  Write a Program to print 1 to N using a loop.

#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter a number N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl; 
    return 0;
}
