// CSC 134
// M2T1
// Mikayla Blakey
// 1/29/25

//ask for user input
//commented out past code from M1Lab I did not need 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
// The owner’s name
    string name = "Mikayla";
// number of apples owned
    int apples = 100;
// price per apple
    double cost_each = 0.25;
// calculate the total price of the apples
    //int apple_amount;
   // double buyer_apple_total = buyer_apple_amount * cost_each;
// calculate the total price of the apples

// print all the information about the orchard
    cout << "Welcome to " << name << "'s apple orchard" << endl;
    //cout << "We have " << apples << " apples for $" << cost_each << " each making your grand total $" << total << " dollars!";
    //cout << endl;

//**adding to past code for assignment**

    string buyer_name; //find customers name
    int apples_to_buy; //how many apples do they want?
    double buyer_apple_total; //we asked for user input
    int buyer_apple_amount;
//this line sets cout for doubles to 2 decimal places
// you have to add #include <iomanip> with the other #include statement at the top
    cout << setprecision(2) << fixed;  
//greet customer and interact below
    cout << "Hello, what is your name?";
    cin >> buyer_name;
//ask how many apples are desired, and tell the cost and amount available
    cout << "Welcome in " << buyer_name << ", We have " << apples << " apples to choose from, with each costing $" << cost_each << ". How many would you like to purchase?" << endl;
    cin >> buyer_apple_amount; 
//equation to get buyers total
    buyer_apple_total = buyer_apple_amount * cost_each;
//thank customer, say goodbye, give total
    cout << "Alrighty, your total is $" << buyer_apple_total << " dollars, for " << buyer_apple_amount << " apples!" << endl; 
    cout << "Thank you for coming by, " << buyer_name << "!" << endl; 
    cout << endl;
    cout << endl;

    return 0; //no errors
}
