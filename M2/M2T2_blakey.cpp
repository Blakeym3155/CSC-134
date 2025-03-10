// CSC 134
// M2T2
// Mikayla Blakey
// 2/3/25

//This program will show us how to use set precision, and doubles. 
//We are going to print a reciept for the user based on the amount of their desired snack they'd like, and do calculations of total, subtotal, and tax.
#include  <iostream>
#include <iomanip> //need for 2 decimals
using namespace std;

int main() {
//set up variables
    double food_price = 5.99;
    string store_name = "Mikki's Snacks";
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
//print set precison for decimals
cout << setprecision(2) << fixed;
cout << "Your total is $" << reciept_total << ", here is your printed reciept." << endl;
cout << endl;
cout << "   Your Reciept    " << endl;
cout << "---------------------" << endl;
cout << "Subtotal = $" << reciept_subtotal << endl;
cout << "Tax =       $" << reciept_tax << endl;
cout << "---------------------" << endl;
cout << "Total =    $" << reciept_total << endl;
cout << endl;
cout << "Thank you, have a great day!" << endl;
cout << endl;

return 0;
}