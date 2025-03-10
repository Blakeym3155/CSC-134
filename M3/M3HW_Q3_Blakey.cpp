// CSC 134
// M3HW- Q3
// Mikayla Blakey
// 3/10/25
//replicate a chose your own adventure game using my base from anothe assignment

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
int user_chest_choice ;
  // ask the question
  cout << "✨ Whilst you're in a enchanted forest you stumble upon two treasure chests ✨.." << endl;
  cout << endl;
  cout << "Do you choose option 1: The Red Ruby Chest" << endl;
  cout << "Do you choose option 2: The Blue Sapphire Chest" << endl;
  cout << endl;
  cout << "Type whether your choice is option 1 or 2 ➡️ : "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

    if (1 == choice) {
  	    chooseOption1();
  }
    else if (2 == choice) {
  	    chooseOption2();
  }
    else {
  	    cout << "I'm sorry, that is not a valid choice. Try Again!" << endl;
  }

  // finish up
  cout << endl;
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  cout << endl;
  cout << endl;
  return 0; // exit without error
}
//outside of main and these are to make my code look cleaner
void chooseOption1(){
    int user_chest_choice;
    
    cout << "---------------------------------------------------------------" << endl;
    cout << "You chose option 1.." << endl;
    cout << "You try opening the chest, and it won't budge." << endl;
    cout << "Chose your next action:" << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "Do you chose option 1: Grabbing a nearby stick to strike the chest" << endl;
    cout << "Or" << endl;
    cout << "Do you chose option 2: Carry onward, and forget about the chest" << endl;
    cin >> user_chest_choice;
    cout << endl;
    if (user_chest_choice == 1) {
        cout << "You hit the chest with the stick, and it opens with a burst of light!" << endl;
        cout << "Inside, you find a map leading to a hidden treasure. You follow the map and find the treasure. Congratulations!" << endl;
    } 
    else if (user_chest_choice == 2) {
        cout << "You decided to leave the chest and continue your journey." << endl;
        cout << "As you walk away, you fall into a hidden pit and get trapped. GAME OVER!" << endl;
    } 
    else {
        cout << "I'm sorry, that is not a valid choice. Try Again!" << endl;
        chooseOption1(); // Let the user retry
    }
}
void chooseOption2(){
    cout << "You chose option 2..." << endl;
    cout << "You hesistate, but as you walk up to the chest it slowly and eerily opens..." << endl;
    cout << "The chest then seeps out with a deadly poison, killing you."<< endl;
    cout << "GAME OVER!"<< endl;
  }

