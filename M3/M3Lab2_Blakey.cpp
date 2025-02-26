// CSC 134
// M3Lab2
// Mikayla Blakey
// 2/26/25
// create a program that converst numerical grades into letter grades!

#include <iostream>
#include <iomanip>
#include <cmath> // For the ceil function
using namespace std;
 
int main(){

    //Define my variables
    double num_grade; // 0-100
    string letter_grade ; /// "A", "B", "C"
    const int A_plus = 100;
    const int A = 90;
    const int B = 80;
    const int C = 70;
    const int D = 60;
    const int F = 0;

    cout << "⬇️  This program converts your number grade into a letter ⬇️" << endl;
    cout << "   Input the desired number grade here: ";
    cin >> num_grade;
    cout << endl;
    //find letter
    //find number
    //if else structures
    // && is AND
    // || is OR

    
    if (num_grade >= A_plus){
        letter_grade = "A+";
    }
    if (num_grade >= A && num_grade < A_plus){
        letter_grade = "A";
    }
    if (num_grade >= B && num_grade < A) {
        letter_grade = "B";
    }
    if (num_grade >= C && num_grade < B) {
        letter_grade = "C";
    }
    if (num_grade >= D && num_grade < C) {
        letter_grade = "D";
    }
    if (num_grade >= F && num_grade < D) {
        letter_grade = "F";
    }


    
    
    cout << setprecision(2) << fixed;
    //round numbers below
    // ⬇️ I asked Co-pilot it so many questions to get some guidance on the rounding below ⬇️
    double fractional_part = num_grade - static_cast<int>(num_grade);
    int rounded_grade;
    if (fractional_part >= 0.5) {
        rounded_grade = static_cast<int>(ceil(num_grade));
    } else {
        rounded_grade = static_cast<int>(num_grade);
    }
    
   cout << " The inputted number grade is " << num_grade << "% Making your letter grade " << letter_grade << endl;
   cout << " The rounded grade would be " << rounded_grade << "% ";
   cout << endl;
   cout << endl;
   cout << endl;

    
    return 0;
}