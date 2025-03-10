// CSC 134
// M4T1
// Mikayla Blakey
// 3/10/25

//
#include  <iostream>
using namespace std; 

int main() {

    //Part 1 say hello 5 times
    int count = 1;
    while(count <= 5) {
        cout << "Hello: " << count << endl;
        count++;
        //count++; is the same as count = count + 1;
    }
    cout << "Done!" << endl;
    return 0;
    }