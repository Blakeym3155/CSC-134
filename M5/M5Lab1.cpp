#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Mikayla Blakey
3/31/25
This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_bypass_bar();
void choice_approach_bar();
void choice_leave_bar();
void choice_sleep();
void choice_walk_in();
void choice_sit_outside();

// TODO: add more choices here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "-------------------------------------------------" << endl;
  cout << "✨ Main Menu ✨" << endl;
  cout << "You've woken up in a unrecognizable mysterious place. After close observation you find a sign that says 'Somnia' That must be the name of this place right?" << endl;
  cout << "The town isn't very lively aside from this building up ahead that is. The building is a worn down brick color with some sqeaky saloon doors." << endl;
  cout << "Do you:" << endl;
  cout << "1. Walk right in." << endl;
  cout << "2. Bypass the bar and continue to another place." << endl;
  cout << "3. Sit outside and ponder." << endl;
  cout << "4. [Quit]" << endl;
  cout << "-------------------------------------------------" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_walk_in();
  } else if (2 == choice) {
    choice_bypass_bar();
  } else if (3 == choice) {
    choice_sit_outside();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
  cout << "-------------------------------------------------" << endl;
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_walk_in() {
  cout << "-------------------------------------------------" << endl;
  cout << "You stick out like a sore thumb, all eyes are lached onto you." << endl;
  cout << "You want a better idea of where you are, and why you're there..." << endl;
  cout << "-------------------------------------------------" << endl;
  cout << "Do you:" << endl;
  cout << "1. Approach the bar for a drink in hopes of getting information on the town?" << endl;
  cout << "2. Leave the way you came" << endl;
  cout << "-------------------------------------------------" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_approach_bar();
  } else if (2 == choice) {
    choice_leave_bar();
  }
}
void choice_sit_outside() {
  cout << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "You sit outside the bar and grow tired, you get comfortable and rest your back and head along the wall, slowly falling into sleep." << endl;
    cout << "You wake up in your bed again, in your home that you had missed whilst being in that weird world." << endl;
    cout << "Was that just a dream? Who knows, at least you're back." << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "⬇️  Want to play again? Here you go ⬇️" << endl;
    main_menu();  // try again
    
  }

// any new choices go here

void choice_bypass_bar() 
{
  cout << endl;
     cout << "-------------------------------------------------" << endl;
     cout << "You continue onwards and stumble across a patch of grass. You think nothin of it and walk forwards." << endl;
     cout << "Turns out it was a trap, probably by local bandits...You have been inpaled by multiple spike and unfortunatly died." << endl;
     cout << "Game Over!" << endl;
     cout << "-------------------------------------------------" << endl;
     cout << "Want to play again? Here you go:" << endl;
     main_menu();  // try again

    }

void choice_leave_bar() {
  cout << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Great going, when you walk in and turn around it makes you look suspicious so the people in the bar follow you." << endl;
    cout << "They then begin beating you mercilously into a pulp. Unfortunatly you die from the injuries." << endl;
    cout << "Game Over! " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "⬇️  Want to play again? Here you go ⬇️" << endl;
    main_menu();  // try again
}


void choice_approach_bar()
{
  cout << endl;
  cout << "-------------------------------------------------" << endl;
  cout << "You find the seat furthest away from all the eyes, and hae no idea what drink to get so you ask for the most popular." << endl;
  cout << "When the bartender brings your drink back you ask him more about the town. He seems stunned but responds and let's you know its the land of your dreams." << endl;
  cout << "Apparently you just have to fall back asleep to return to the main world." << endl;
  cout << "-------------------------------------------------" << endl;
  cout << "Do you:" << endl;
  cout << "1. Try to sleep on the bar counter, and trust the bartender?" << endl;
  cout << "2. Leave the bar?" << endl;
  cout << "-------------------------------------------------" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_sleep();
  } else if (2 == choice) {
    choice_leave_bar();
  }
  }

  void choice_sleep() 
  { 
    cout << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "You rest you eyes to see if it truly works and guess what..." << endl;
    cout << "When you open them you realized it truly was a dream, and now you only wish to go back and experience that weird land." << endl;
    cout << "At least you're safe now though right?" << endl;
    cout << "Game Over!" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "⬇️  Want to play again? Here you go ⬇️" << endl;
    cout << "-------------------------------------------------" << endl;
    main_menu();  // try again
}
 

