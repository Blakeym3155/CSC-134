// CSC 134
// M3T1
// Mikayla Blakey
// 2/17/25

//ask user to submit length and width of rectangles, and display area
#include  <iostream>
using namespace std; 

int main() {

    //add variables
    double Rec1_length, Rec2_length, Rec1_width, Rec2_width, Rec1_area, Rec2_area;
    //ask user for rectangle 1 length input
    cout << "Input the length of your first rectangle in inches here: " ;
    cin >> Rec1_length ;
    cout << endl ;
     //ask user for rectangle 1 width input
     cout << "Input the width of your first rectangle in inches here: " ;
     cin >> Rec1_width ;
     cout << endl ;

     cout << "-----------------------------------------------" << endl;
     //ask user for rectangle 2 length input
     cout << "Input the length of your second rectangle in inches here: " ;
     cin >> Rec2_length ;
     cout << endl ;
    //ask user for rectangle 2 width input
    cout << "Input the width of your second rectangle in inches here: " ;
    cin >> Rec2_width ;
    cout << endl ;
    //calculate area
    Rec1_area = Rec1_length * Rec1_width;
    Rec2_area = Rec2_length * Rec2_width;
    //display area
    cout << "Your calculated area for your first rectangle is " << Rec1_area << " squared inches";
    cout << endl;
    cout << "Your calculated area for your second rectangle is " << Rec2_area << " squared inches";
    cout << endl;
    cout << endl;
    return 0;
    }