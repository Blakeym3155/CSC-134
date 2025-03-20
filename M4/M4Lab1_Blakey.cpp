// CSC 134
// M4Lab1
// Mikayla Blakey
// 3/17/25
// we will be trying differnt types of loops. We did nested, while, do while, and for.

#include  <iostream>
using namespace std; 

int main() {
    //nany regular character can be char
    // unicode characters have to be strings(aka the emojis)

    string pixel_1 = "😃"; // use any eomoji to test this
    string pixel_2 = "😍";
    string pixel_3 = "🤑";
    const int SIZE = 7;
    int WIDTH;
    int HEIGHT;
    //print single emoji
    cout << pixel_1 << endl;
    cout << endl;

    //try to print as a while loop

    int count = 0;
    while (count < 5) {
        cout << pixel_1 << " ";
        count++;
    }
    cout << endl;
   
    // try to print as a do while loop
    count = 0;
    do {
        cout << pixel_2 << " ";
        count ++;
    } while (count < 5);
    cout << endl;
   //user input here 
   cout << "Please enter the desired height for the box here (Make sure its a whole number): ";
   cin >> HEIGHT;
   cout << endl;
   cout << " Please endtere the desired width for the box here (Make sure its a whole number): ";
   cin >> WIDTH;
   cout << endl;
    //try to do a for loop
    //this is the one time using 'i' as a variable name is OK
    //'i' stands for index
    // try to make  box with the emojis
    cout << endl;
    cout << "Printed Horizontally (row)" << endl;
    for(int i=0; i < WIDTH; i++){
        cout << pixel_3 << " ";
    }
    cout << endl;
    cout << "Printed Vertically (column)" << endl;
    for(int i=0; i < HEIGHT; i++){
        cout << pixel_3 << endl;
    }
    cout << endl;
    cout << "printing a box " << HEIGHT << " by " << WIDTH << endl;
    cout << endl;
 

    //This is a nested loop that prints based upon user input
    for (int h=0; h< HEIGHT; h++){
        //print current row
        for (int w=0; w< WIDTH; w++){
            cout << pixel_3 << " ";
        }
        //go to next line
        cout << endl;
    }
        return 0;
    }