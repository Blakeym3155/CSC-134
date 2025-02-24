// CSC 134
// M3Lab1
// Mikayla Blakey
// 2/24/25
// replicate a game similar to deal or no deal

#include <iostream>
using namespace std;

void chooseOption1();
void chooseOption2();
void chooseOption3();

int main(){
     // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice; 

  // ask the question
  cout << "✨ Whilst you're in a enchanted forest you stumble upon two treasure chests ✨.." << endl;
  cout << endl;
  cout << "Do you choose option 1: The Red Ruby Chest" << endl;
  cout << "Do you choose option 2: The Blue Sapphire Chest" << endl;
  cout<<  "Do you choose option 3: Ignore Both Chests"<< endl;
  cout << endl;
  cout << "Type whether your choice is option 1, 2, or 3 here ➡️ : "; 
  cin >> choice;

  // using if, make a decision based on the user's choice
while True:
    if (1 == choice) {
  	    chooseOption1();
        break
  }
    else if (2 == choice) {
  	    chooseOption2();
        break
  }
    else if (3 == choice) {
        chooseOption3();
        break
  }
    else {
  	    cout << "I'm sorry, that is not a valid choice. Try Again!" << endl;
  }

  // finish up
  cout << "Continue onwards with your journey, thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error


    return 0;
}
//outside of main and these are to make my code look cleaner
void chooseOption1(){
    cout << "You chose option 1.." << endl;
    cout << "You open the chest, and it won't budge." << endl;
    cout << "You then grab a nearby stick, and repeatedly hit the chest."<< endl;
    cout << "The chest then opens up with a glorious display of...bread loafs"<< endl;
}
void chooseOption2(){
    cout << "You chose option 2..." << endl;
    cout << "You hesistate"
  }
}
void chooseOption3(){
    cout << "You chose option 3...";
    cout << ""

}