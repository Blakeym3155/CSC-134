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
    int account_number = 1056;
    double deposit_amount;
    double withdrawal_amount;
    char user_choice;
    string user_name;
    double new_balance;

cout<< "Welcome to The Welson Brothers Bank!" << endl;
cout << "Input the name on the account: ";
getline(cin, user_name);
cout<< endl;
cout<< "Input your current account balance: $";
cin >> user_balance;
cout << endl;
cout<< "Do you need to deposit or withdrawal? Type 'D' for deposit and 'W' for withdrawal: ";
cin >> user_choice;
cout << endl;


if (user_choice == 'D'){
    cout << "Input how much you will be depositing here: $";
    cin >> deposit_amount;
    new_balance = deposit_amount + user_balance;
    cout << endl;
}
else if (user_choice == 'W'){
    cout << "Input how much you will be withdrawing here: $";
    cin >> withdrawal_amount;
    new_balance = user_balance - withdrawal_amount;
    cout << endl;
}
else{
    cout << "Input Error! Reset the program.";
    
}

cout << setprecision(2) << fixed;  
cout << "Account number "<< account_number <<  " has a new balance of $" << new_balance << endl;
cout << "Thank you " << user_name << " come again next time!";
cout << endl;
cout << endl;
return 0;
}