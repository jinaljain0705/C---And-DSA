// Write a program to calculate the sum of the first N odd numbers using a while loop.
#include <iostream>
using namespace std;

int main() {
    int N, sum = 0, count = 1, oddNumber = 1;

    cout << "Enter the value of N: ";
    cin >> N;

    while (count <= N) {
        sum += oddNumber; 
        oddNumber += 2;   
        count++;          
    }

    cout << "The sum of the first " << N << " odd numbers is: " << sum << endl;

    return 0;
}
