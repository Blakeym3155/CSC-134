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
double getRainfall();
double getMonth();
void displayRainfall(double rainfall, string month);

int main()


{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double rainfall;
   string month;

  month = getMonth();         
  rainfall = getRainfall();
    
   displayRainfall(rainfall, month);
          
   return 0;
}
double getRainfall(){
    cout << "Enter Rainfall: " << endl;
    double rainfall;
    cin >> rainfall;
    return rainfall;
}
double getMonth(){
    cout << "Enter Month: " << endl;
    string month;
    cin >> month;
    return month;
}
void displayRainfall(double length, double width, double area){
    cout << "Your rectangles width is " << width << ". Your rectangles length is " << length << ". Making your rectangles final area " << area << "." << endl;
    cout << endl;
}
