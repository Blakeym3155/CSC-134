// CSC 134
// M3T3
// Mikayla Blakey
// 2/24/25

//building a program that simulates the game craps

//start with dice roll
//Dice Type: 1d6
#include  <iostream>
//for randome
#include <cmath>
using namespace std; 

int main() {
/*  const int sides = 6; //the number of sides of the dice will always be the same
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
*/
//comented out above code since it was for another task

    ///Adding the assignement craps code below
    cout << "Let's roll some dice!" << endl;
    int seed = time(0);
    //cout << "Your seed is: " << seed << endl;
    //cout << "What's your lucky number? ";
    //cin >> seed;
    // Seed the RNG
    srand(seed);

    const int MAX = 6; // numbers from 1-6
    int roll1, roll2, total;
    roll1  = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    cout << "Your roll was: " << roll1 << endl;

    roll2  = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    cout << "Your roll was: " << roll2 << endl;

    total = roll1 + roll2;
    cout << "Your total roll is: " << total << endl;

const int SNAKE_EYES = 2;
const int THREE_LOSE = 3;
const int BOX_CARS = 12;
// 11 and 7 wins
const int LUCKY_SEVEN = 7;
const int ELEVEN_LOSE = 11;
    // Let's play craps!
    // 7 and 11 - win!
    // 2 and 12 - lose.
    // anything else -- comes later.
    if (LUCKY_SEVEN == total) {
        cout << "⚂ ⚃" << endl;
        cout << "Lucky seven! You win!" << endl;
        cout << endl;
    }
    else if (ELEVEN_LOSE == total) {
        cout << "⚄ ⚅" << endl;
        cout << "Eleven is a winner!" << endl;
        cout << endl;
    }
    else if (SNAKE_EYES == total) {
        cout << "⚀⚀" << endl;
        cout <<  "Snake eyes! Too bad, you lose." << endl;
        cout << endl;
    }
    else if (THREE_LOSE == total) {
        cout << "⚀⚁" << endl;
        cout << "Sorry, three is unlucky, you lose." << endl;
        cout << endl;
    }
    else if (BOX_CARS == total) {
        cout << "⚅⚅" << endl;
        cout << "Boxcars! Sorry, you lost." << endl;
        cout << endl;
    }
    else {
        // anything else
        cout << "Your point is " << total << " but we'll do that part later" << endl;
    }
    }