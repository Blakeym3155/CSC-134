// CSC 134
// M1LAB
// Your Name
// The Date
#include <iostream>
using namespace std;
int main() {
// This program will simulate an apple orchard.
// The owner’s name
    string name = "Mikayla";
// number of apples owned
    int apples = 40;
// price per apple
    double cost_each = 0.25;
    double total = apples * cost_each;
// calculate the total price of the apples
// TODO

// print all the information about the orchard
// TODO
    cout << "Welcome to " << name << "'s apple orchard" << endl;
    cout << "We have " << apples << " apples, for " << cost_each << " each, your total is $" << total << " dollars.";
    cout << endl;
    cout << endl; 

    return 0; //no errors
}