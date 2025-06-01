// 1D Array
/* create 1D Array for all leap years from the given range. using c++ */

#include <iostream>
using namespace std;

int main(){
    int startYear, endYear;
    cout << "enter start year:";
    cin >> startYear;
    cout << "enter end year:";
    cin >> endYear;

    // array to store leap 
    int leapYears[100]; 
    int count = 0;
    for (int year = startYear; year <= endYear; year++){
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            leapYears[count] = year;
            count++;
        }
    }
    cout << "leap years from" << startYear << " to " << endYear << " are: ";
    for (int i = 0; i < count; i++){
        cout << leapYears[i] << " ";
    }
    cout << endl;
    cout << "total leap years:" << count << endl;
    cout << "leap years in reverse order:";
    for (int i = count - 1; i >= 0; i--){
        cout << leapYears[i] << " ";
    }
    cout << endl;
    return 0;                              
    
}
