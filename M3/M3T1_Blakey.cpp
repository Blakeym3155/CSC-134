// CSC 134
// M3T1
// Mikayla Blakey
// 2/17/25

//ask user to submit length and width of box, and display area
#include  <iostream>
using namespace std; 

int main() {

    //add variables
    double length;
    double width;
    double height;
    double area;
    //ask user for length input
    cout << "Input the length of your box in inches here: " ;
    cin >> length ;
    cout << endl ;
    //ask user for width input
    cout << "Input the width of your box in inches here: " ;
    cin >> width ;
    cout << endl ;
    //calculate area
    area = length * width;
    //display area
    cout << "Your calculated area is " << area << " squared inches";
    cout << endl;
    cout << endl;
    return 0;
    }