// CSC 134
// M5HW - answer the six questions
// Mikayla Blakey
// 4/23/25

#include <iostream>
using namespace std;
#include <iomanip> //to help set precision


//Question 1 Below
string getMonth();
double getRainfall();
void displayAverage(string m1, string m2, string m3, double r1, double r2, double r3);
//question 2 below
double getDimension(string name);
double calculateVolume(double width, double length, double height);
void displayVolume(double volume) ;

int main() {
    string month1, month2, month3;
    double rain1, rain2, rain3;

    //try to get input
    month1 = getMonth();
    rain1 = getRainfall();

    month2 = getMonth();
    rain2 = getRainfall();

    month3 = getMonth();
    rain3 = getRainfall();

cout << "---------------------------------------------------" << endl;
displayAverage(month1, month2, month3, rain1, rain2, rain3);
cout << "---------------------------------------------------" << endl;
cout << endl;
//question 2 
double width = getDimension("width");
double length = getDimension("length");
double height = getDimension("height");

double volume = calculateVolume(width, length, height);
cout << "---------------------------------------------------" << endl;
displayVolume(volume);
cout << "---------------------------------------------------" << endl;
cout<< endl;
    return 0;
}
//function to get the month
string getMonth(){
    string month;
    cout << "Enter month: ";
    cin >> month;
    return month;
}

//get the rainfall

double getRainfall(){
    double rainfall;
    cout << "Enter rainfall for that month (in inches) ";
    cin >> rainfall;
    return rainfall;
}
//make function to display average and calculate
void displayAverage(string m1, string m2, string m3, double r1, double r2, double r3){
   double average = (r1+r2+r3) / 3.0;
   cout << fixed << setprecision(2);
   cout << "The average rainfall for " << m1 << ", " << m2 << ", and " << m3 << " is " << average << " inches." << endl; 
}

//question 2
//setting up dimensions with input given
double getDimension(string name){
    double value;
    do{
        cout << "Enter the " << name << " of the block: ";
        cin >> value;
        if(value <= 0){
            cout << "Invalid input. " << name << " must be greater than 0." << endl;
        }
    }
    while (value <= 0);
    return value;
    }
//calculates volume
double calculateVolume(double width, double length, double height){
    return width * length * height;
}
void displayVolume(double volume){
    cout << "The volume of the block is " << volume << " cubic units." << endl;

}
