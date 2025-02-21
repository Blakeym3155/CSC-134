// CSC 134
// M2Lab1
// Mikayla Blakey
// 2/9/25



#include  <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double user_balance ;
    int account_number;
    double deposit_amount;
    double withdrawal_amount;
    char user_choice;
    string user_name;

cout<< "Welcome to The Welson Brothers Bank!" << endl;
cout << "Input the name on the account: ";
getline(cin, user_name);
cout<< endl;
cout<< "Input your current account balance: ";
cin >> user_balance;
cout << endl;
cout<< "Do you need to deposit or withdrawal? Type 'D' for deposit and 'W' for withdrawal: ";
cin >> user_choice;
cout << endl;


if (user_choice == 'D'){
    cout << "Input how much you will be depositing here: ";
    cin >> deposit_amount;
    cout << endl;
}
else if (user_choice == 'W'){
    cout << "Input how much you will be withdrawing here: ";
    cin >> withdrawal_amount;
    cout << endl;
}
else{
    cout << "Input Error Retry";
    
}

return 0;
}