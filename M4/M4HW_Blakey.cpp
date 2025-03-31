// CSC 134
// M4HW
// Mikayla Blakey
// 3/24/25
// I will be making a calculator like program that produces the times table of the chosen number by the user

#include  <iostream>
using namespace std; 

int main() {

    int number =5;
    int i = 1;

    // Bronze Level print 5x table
    cout << "5 Times Table:" << endl;
    cout << "---------------" << endl;
    while (i <= 12) {
        cout << number << " times " << i << " is " << number * i << "." << endl;
        i++;
    }
    cout << endl;

    //Silver Level let user input number 1 to 12
    cout << "Enter number from 1 to 12: ";
    cin >> number;
    cout << endl;

    i = 1; //resets the counter from before
    cout << number << " Times Table " << endl;
    cout << "-----------" << endl;
    while (i <= 12) {
        cout << number << " times " << i << " is " << number * i << "." << endl;
        i++;
    }
    cout << endl;

    //gold level adding input validation
    do {
        cout << "Enter a number from 1 to 12: ";
        cin << number;
        if ( number < 1 || number > 12){
            cout << "This input is invalid. Please enter a number BETWEEN 1 and 12.";
        }
    } while (number < 1 || number > 12);
    i = 1; //reset counter again
    cout << number << " Times Table " << endl;
    cout << "-----------" << endl;
    while (i <= 12){
        cout << number << " times " << i << " is " << number * i << "." << endl;
        i++;
    }
    return 0;
}