// CSC 134
// M2HW_Q3
// Mikayla Blakey
// 2/21/25



#include  <iostream>
#include <iomanip>
using namespace std;


int main() {
    int pizza_amount;
    int slice_per_pizza;
    int guest_number;

    // Prompt the user for input
    cout << "Enter the number of pizzas ordered: ";
    cin >> pizza_amount;

    cout << "Enter the number of slices per pizza: ";
    cin >> slice_per_pizza;

    cout << "Enter the number of guests: ";
    cin >> guest_number;

    // Calculate total slices and required slices
    int total_slices = pizza_amount * slice_per_pizza;
    int required_slices = guest_number * 3; // Each guest gets 3 slices

    // Calculate leftover slices
    int leftover_slices = total_slices - required_slices;

    // Display the result
    if (leftover_slices >= 0) {
        cout << "There are " << leftover_slices << " leftover slices of pizza." << endl;
    } else {
        cout << "You need " << -leftover_slices << " more slices of pizza." << endl;
    }

    cout << endl;
    return 0;
}

    