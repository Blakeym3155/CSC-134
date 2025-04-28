#include <iostream>
using namespace std;

// CSC 134
// M7T1 - Restaurant Rating
// norrisa
// 4/28/24
// Use Restaurant class to store user ratings

// Next time we'll put the class in a separate file
class Restaurant {
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
	// constructor 
	Restaurant(string n, double r) {
		name = n;
		rating = r;
	}
    Restaurant(){
        //default empty constructor
    }
	// getters and setters
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
    void showInfo(){
        //prints resaurant info nicely
        cout << "Restaurant Name: ";
        cout << this->name << endl; //<----'this' is a keyword that means a current object
        cout << "Rating: ";
        //Print the stars for rating
        cout << this->rating << endl;  //<----'this' is a keyword that means a current object
    }
  
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;

    //create a sample resturant
    Restaurant rest1 = Restaurant ("Kayla's Kitchen", 3.5);
    Restaurant rest2 = Restaurant();
    cout << "Enter restaurant name: ";
    string name;
    //this trick will let us get names with spaces in them
   //cin.ignore(); //skips extra newline <-- unfortunately doesnt work on codespace so we commented it out and program looks great
    getline(cin, name); //read entire newline
    //take this out to help with the trick---->   cin >> name;
    rest2.setName(name);
    //get restaurant rating with user input
    cout << "Enter restaurant rating: "; 
    double rating;
    cin >> rating;
    rest2.setRating(rating);
    
    rest1.showInfo();
    rest2.showInfo();


    return 0;

}