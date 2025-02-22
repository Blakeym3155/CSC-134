// CSC 134
// M2Lab1- making a program to calulate box, prices for the box, and more.
// Mikayla Blakey
// 2/9/25



#include  <iostream>
#include <iomanip>
using namespace std;

int main() {

//add variables
double length;
double width;
double height;
double volume;
double charge;
double cost;
double profit; 
//these costs are constant
const double cost_per_cubic_foot = .3;
const double charge_per_cubic_foot = .52;

//ask user to input length00
cout << "Hello, what is the length of your box in feet?: " ;
cin >> length; 
cout << endl;
cout << "What is the width of your box in feet?: ";
cin >> width; 
cout << endl;
cout << "Lastly, what is the height of your box in feet?: " ;
cin >> height;
cout << endl;

//equation for volume
volume = length*width*height;
//equation for cost
cost = volume * cost_per_cubic_foot;
//equation for charge
charge = volume * charge_per_cubic_foot;
//calculate profit
profit = charge - cost;

//print out the calculations below

//display the volume to user
cout << "You're box has the total volume of " << volume << " cubic feet." << endl;
//I want the decimal points to look right
 cout << setprecision(2) << fixed;
//display cost of the box
cout << "That will cost you $" << cost << " per box." << endl;
//display the charge per square foot to user
cout << "You can charge the customer $" << charge << " per cubic foot." << endl;
//display profits of box.
cout << "Making your final profits $" << profit << "."<< endl;
cout << endl;
cout << endl;

return 0;
}