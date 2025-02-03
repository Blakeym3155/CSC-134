// CSC 134
// M2T2
// Mikayla Blakey
// 2/3/25

#include  <iostream>
#include <iomanip> //need for 2 decimals
using namespace std;

int main() {
//set up variables
    double food_price = 5.99;
    string store_name = "Mikkis Snacks";
    string snack_name = "Salted Pretzel";
    int snack_amount;
    double reciept_subtotal, reciept_total, reciept_tax;
  //  double reciept_total;
  //  double reciept_tax;
    double tax = 0.08;
//display variables in output
    cout << "Welcome to " << store_name << "!" << endl;
    cout << "We only have one snack available, our famous " << snack_name << ". The cost is $" << food_price << " dollars." << endl;
//start on user input
    cout << "How many " << snack_name << "s would you like?" << endl;
    cin  >> snack_amount;
    cout <<  endl;

//figure out subtotal for reciept
reciept_subtotal = food_price * snack_amount;
//calculate tax with equation and subtotal
reciept_tax = tax * reciept_subtotal;
//this is subtotal plus the tax amount 
reciept_total = reciept_subtotal + reciept_tax;
//print reciept and say goodbye
cout << "Your total is $" << reciept_total << ", here is your printed reciept." << endl;
cout << endl;

cout << endl;
cout << "Have a great day!" << endl;


return 0;
}