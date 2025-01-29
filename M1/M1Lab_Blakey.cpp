// CSC 134
// M1LAB
// Mikayla Blakey
// 1/27/25
#include <iostream>
using namespace std;
int main() {
// The owner’s name
    string name = "Mikayla";
// number of apples owned
    int apples = 40;
// price per apple
    double cost_each = 0.25;
// calculate the total price of the apples
    double total = apples * cost_each;
// print all the information about the orchard

    cout << "Welcome to " << name << "'s apple orchard" << endl;
    cout << "We have " << apples << " apples for $" << cost_each << " each making your grand total $" << total << " dollars!";
    cout << endl;
    cout << endl; 

    return 0; //no errors
}