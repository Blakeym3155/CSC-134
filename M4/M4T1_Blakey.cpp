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
        //count++; is the same as count = count + 1; also count += 1; is the same
    }
    cout << "Done!" << endl;
    cout << endl;

    //part 2 we'll make the table of squares
/*
    const int MIN_NUM = 1 ;
    const int MAX_NUM = 10;
    cout << "Table of Squares" << endl;
    cout << "-----------------" << endl;
    int num = MIN_NUM;
    int sq; //num squared
    while (num <= MAX_NUM) {
        sq= num*num;
        cout << num << "\t" << sq << endl;
        num++;
    }
        */
        return 0;
    }