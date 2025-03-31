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
    while (i <= 12) {
        cout << number << " times " << i << "is" << number * i << "." << endl;
        i++;
    
    }

}