/*WAP to check if a number is even or odd*/
/*
Algorithm:
1. Start the program.
2. Declare a variable 'num' to store the number.
3. Prompt the user to enter a number and read it into 'num'.
4. Check if 'num' is divisible by 2:
   a. If true, print "The number is even."
5. If false, print "The number is odd."
6. End the program.
*/
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num % 2 == 0){
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
    return 0;
}
