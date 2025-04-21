// CSC 134
// M5T1 - finding the area of a rectangle 
// Mikayla Blakey
// 4/2/25

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()


{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}
double getLength(){
    cout << "Input length value here: " << endl;
    double length;
    cin >> length;
    return length;
}
double getArea(double length, double width){
    double area = width * length;
    return area;
}
double getWidth(){
    cout << "Input width value here: " << endl;
    double width;
    cin >> width;
    return width;
}
void displayData(double length, double width, double area){
    cout << "Your rectangles width is " << width << ". Your rectangles length is " << length << ". Making your rectangles final area " << area << "." << endl;
    cout << endl;
}


//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************