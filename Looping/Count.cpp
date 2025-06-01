// .Write a program that counts down from 5 to 1 and prints each number using a do-while loop.
#include <iostream>
using namespace std;

int main() {
    int count = 5;

    do {
        cout << count << " ";
        count--;
    } while (count > 0);

    cout << endl;
    return 0;
}
