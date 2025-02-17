// CSC 134
// M3T3
// Mikayla Blakey
// 2/17/25

//building a program that simulates the game craps

//start with dice roll
//Dice Type: 1d6
#include  <iostream>
//for randome
#include <cmath>
using namespace std; 

int main() {
    const int sides = 6; //the number of sides of the dice will always be the same
     //this is going to be our base for the random number
    //int seed = 5; 
    int seed = time(0);
    // rand() is a large number, so we take the remainder of it which is %
    srand(seed);
    //name roll variable
    int roll;
    //roll a few times
    roll = (rand() % sides)+1;
    cout<< roll << endl;

    roll = (rand() % sides)+1;
    cout<< roll << endl;

    roll = (rand() % sides)+1;
    cout<< roll << endl;
   
    cout << endl;
    return 0;
    }