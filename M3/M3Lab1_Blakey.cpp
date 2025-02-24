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

    if (1 == choice) {
  	    chooseOption1();
  }
    else if (2 == choice) {
  	    chooseOption2();
  }
    else if (3 == choice) {
        chooseOption3();    
  }
    else {
  	    cout << "I'm sorry, that is not a valid choice. Try Again!" << endl;
  }

  // finish up
  cout << endl;
  cout << "Continue onwards with your journey, thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error
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
    cout << "You hesistate, but as you walk up to the chest it slowly and eerily opens..." << endl;
    cout << "Upon your arrival to the chest you jump with joy, there are "
  }

void chooseOption3(){
    cout << "You chose option 3...";
    cout << "You walk right between the two chests and carry on forwards, but after walking just a few steps past them..." << endl;
    cout << "You hear a click, and they both fly open revealing lustrous jewels, gems, gold, and of course bread loafs!" << endl;

}