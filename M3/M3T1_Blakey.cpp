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
    cout << "Input the width of your box in inches here: " ;
    cin >> width ;
    cout << endl ;
    cout << "Your calculated area is " << area << " squared inches"


    //ask user for width input

    //calculate area
    area = length * width;
    return 0;
    }