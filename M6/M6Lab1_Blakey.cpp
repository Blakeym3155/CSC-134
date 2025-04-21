// CSC 134
// M6Lab - Using vectors to make a roulette type of game
// Mikayla Blakey
// 4/21/25

#include <vector>
#include <iostream>
using namespace std;

void print_shell(int shell);
// moved these so print_shell can see them
const int RED = 1;
const int BLACK = 2;
const int EMPTY = 0; // we'd need this with an array since the size of the array cannot just shrink, this way we just have empty space filling unwanted sections

int main() {

//Example 1: using arrays

//we're simply imitating the game Buckshot Roulette here
int magazine [] = {RED, BLACK, BLACK, RED};
for (int shell : magazine){
    string shellName ;
    if (shell == BLACK){
        shellName = "Black 🏴";
    }
    if (shell == RED){
        shellName = "Red 💥";
    }
    cout << "Next Shell: " << shellName << endl;
}
cout << endl;


//Example 2: using vectors

//.size() tells you how many items are in a vector
//push_back() adds an item to the back (end) of the vectors
// .pop_back() removes an iem from the back (end) of the vector

vector<int>mag;
//load mag
mag.push_back(RED);
mag.push_back(BLACK);
mag.push_back(BLACK);
mag.push_back(RED);

//this changes the names from 1 and 2 to red and black



int num_shells = mag.size();
//look at shell before ejection
int current_shell = mag.at(num_shells-1);
//cout << "Next: Shell " << current_shell << endl;
print_shell(current_shell);

//eject shell
mag.pop_back(); // this removes the last shell
num_shells--;
// repeat
current_shell = mag.at(num_shells-1);
//cout << "Next:Shell " << current_shell << endl;
print_shell(current_shell);
mag.pop_back(); 
cout << "Mag Contains " << mag.size() <<" shells " << endl;
cout << "It could hold up to " << mag.capacity() << " before resizing." << endl;
return 0;
}

// in a function to save space
void print_shell(int shell) {
    string shellName ;
    if (shell == BLACK){
        shellName = "Black 🏴";
    }
    if (shell == RED){
        shellName = "Red 💥";
    }
    cout << "Next Shell: " << shellName << endl;
}