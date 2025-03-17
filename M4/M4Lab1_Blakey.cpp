// CSC 134
// M4Lab1
// Mikayla Blakey
// 3/17/25


#include  <iostream>
using namespace std; 

int main() {
    //nany regular character can be char
    // unicode characters have to be strings(aka the emojis)

    string pixel_1 = "😃"; // use any eomoji to test this
    string pixel_2 = "😍";
    string pixel_3 = "🤑";
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

    //try to do a for loop
    //this is the one time using 'i' as a variable name is OK
    //'i' stands for index

    cout << endl;
    for(it i=0; i < 10; i++){
        cout << pixel_3 << " ";
    }

        return 0;
    }