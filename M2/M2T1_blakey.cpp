// CSC 134
// M2T1
// Mikayla Blakey
// 1/29/25

//ask for user input


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
// calculate the total price of the apples

// print all the information about the orchard
    cout << "Welcome to " << name << "'s apple orchard" << endl;
    //cout << "We have " << apples << " apples for $" << cost_each << " each making your grand total $" << total << " dollars!";
    cout << endl;
//adding to past code for assignment

    string buyer_name; //find customers name
    int apples_to_buy; //how many apples do they want?

//greet customer and interact below
    cout << "Hello, what is your name?";
    cin >> buyer_name;
    cout << "Thank you for coming by, " << buyer_name << "!";
    cout << endl;
    cout << endl;


    return 0; //no errors
}
