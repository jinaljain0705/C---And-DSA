// Write a program to calculate the sum of numbers from 1 to N, where N is provided by the user using do-while loop.
#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N < 1) {
        cout << "Please enter a positive integer." << endl;
        return 1; 
    }

    // Calculate the sum using a do-while loop
    int i = 1;
    do {
        sum += i; // Add i to sum
        i++;      // Increment i
    } while (i <= N); // Continue until i exceeds N

    // Output the result
    cout << "The sum of numbers from 1 to " << N << " is: " << sum << endl;

    return 0;
}
