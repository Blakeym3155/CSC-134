// CSC 134
// M3HW- Q2
// Mikayla Blakey
// 3/5/25
//I will be adding a tip and take out/ dine in option to my receipt calculator

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
//set up variables
double food_price = 5.99;
string store_name = "Mikki's Snacks";
string snack_name = "Salted Pretzel";
int snack_amount;
int order_type;
double receipt_subtotal, receipt_total, receipt_tax, tip;

//  double reciept_total;
//  double reciept_tax;
double tax = 0.08;
double tip_percentage = 0.15;
//display variables in output
cout << "Welcome to " << store_name << "!" << endl;
cout << "We only have one snack available, our famous " << snack_name << ". The cost is $" << food_price << " dollars." << endl;
//start on user input
cout << "How many " << snack_name << "s would you like?" << endl;
cin  >> snack_amount;
cout <<  endl;

// ask if order is dine in or takeaway
cout << "Please enter '1' if you're dining in and '2' if you're taking out" << endl;
cin >> order_type;
cout << endl;

//figure out subtotal for reciept
receipt_subtotal = food_price * snack_amount;
//calculate tax with equation and subtotal
receipt_tax = tax * receipt_subtotal;

//calculate the tip
if ( order_type == 1){
    tip = receipt_subtotal * tip_percentage;
}
else {
    tip = 0;
}
//this is subtotal plus the tax amount 
receipt_total = receipt_subtotal + receipt_tax + tip;
//print reciept and say goodbye
//print set precison for decimals
cout << setprecision(2) << fixed;
cout << "Your total is $" << receipt_total << ", here is your printed receipt." << endl;
cout << endl;
cout << "   Your Reciept    " << endl;
cout << "---------------------" << endl;
cout << "Subtotal = $" << receipt_subtotal << endl;
cout << "Tax =       $" << receipt_tax << endl;
if (tip > 0) {
    cout << "Tip =       $" << tip << endl;
}
cout << "---------------------" << endl;
cout << "Total =    $" << receipt_total << endl;
cout << endl;
cout << "Thank you, have a great day!" << endl;
cout << endl;





     
return 0;
}


void dineIn(){
     

}
void takeOut() {


}