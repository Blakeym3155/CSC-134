// CSC 134
// M3HW
// Mikayla Blakey
// 3/5/25
// I will make a simple chat bot in this program

#include <iostream>
using namespace std;

int main(){
// this program will ask a question 
string user_input;


cout << "Hello I'm chat bot Polly, Do you like me yes or no? "<< endl;
cin >> user_input ;
//making the if statements to display
if (user_input == "yes" || "Yes" || "YES"){
    //I want both yes and Yes to work so I use an OR statement
    cout << "I'm happy to meet you, we'll become great companions." << endl;
    cout << endl;
}
else if (user_input == "no" || "No" || "NO" ){
    
    cout << "I'm sorry to not be the best, but with time hopefully you'll like me." << endl;
    cout << endl;
}
else {
    cout << "I dont understand what you are saying, I'm sorry. " << endl;
    cout << endl;
}


     
return 0;
}