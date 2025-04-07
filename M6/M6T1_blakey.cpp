// CSC 134
// M6T1 
// Mikayla Blakey
// 4/7/25

#include <iostream>
using namespace std;
int main() {
    //first version will have no array
    const int DAYS = 5;
    int cars_today ;
    int cars_total= 0 ;
    double cars_average;
    int cars[DAYS];

    cout << "Enter cars that pass for each day."<< endl;
    for (int i=0; i< DAYS; i++) {
        cout << "Day " << i+1 << " : " ;
        cin >> cars_today;
        cars[i] = cars_today;
        cars_total += cars_today;
    }
    cout << "Over " << DAYS << " days, total cars = " << cars_total << endl;

cars_average = cars_total / DAYS ;
cout << "For an average of " << cars_average << " each day." << endl;

// no well print an array 
for ( int i= 0; i < DAYS; i++){
    cout<< "Day: " << i+1 << " Count: " << cars[i] << endl;
}
cout << endl;
} 
