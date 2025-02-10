// CSC 134
// M2Lab1
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
const double cost_per_cubic_foot = .23;
const double charge_per_cubic_foot = .5;

//ask user to input length00
cout << "Hello, what is the length of your box in feet?" << endl;
cin >> length;
cout << "What is the width of your box in feet?" << endl;
cin >> width;
cout << "Lastly, what is the height of your box in feet?" << endl;
cin >> height;

//equation for volume
volume = length*width*height;
//equation for cost
cost = volume * cost_per_cubic_foot;
//equation for charge
charge = volume * charge_per_cubic_foot;
//calculate profit
profit = charge - cost;

//print out the calculations below4
//display the volume to user
cout << "You're box has the volume of " << volume << " square feet." << endl;
//display the charge per square foot to user
//I want the decimal points to look right
 cout << setprecision(2) << fixed; 
cout << "You are charged $" << charge << " per square foot." << endl;
//display cost of the box to user
cout << "Making the cost of the box $" << cost << "." << endl;
//display profits of box.
cout << "So your final profits would be $" << profit << "."<< endl;


return 0;
}