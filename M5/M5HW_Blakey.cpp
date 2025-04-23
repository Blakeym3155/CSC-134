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


