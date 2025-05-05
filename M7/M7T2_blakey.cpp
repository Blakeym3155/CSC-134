// CSC 134
// M7T2- Enter code and alter it
// Mikayla Blakey
// 5/5/25

#include <iostream>
using namespace std;

//declare rectangle
class Rectangle
{
    private:
        double width;
        double length;
    public: 
        void setWidth(double);
        void setLength(double);
        double getWidth() const;
        double getLength() const;
        double getArea() const;
};
void Rectangle::setWidth(double w)
{
    width = w;
}
void Rectangle::setLength(double len)
{
    length = len;
}
double Rectangle::getArea() const
{
return width * length;
}
double Rectangle::getWidth() const
{
return width ;
}
double Rectangle::getLength() const
{
return length;
}

int main()
{
    Rectangle box; //defines rectangle class
    double rectWidth; //local variable for width
    double rectLength; //local variable for length

    //get user input
    cout << "This Program will calcualte the area of a";
    cout << " rectangle. Input the width: " ;
    cin >> rectWidth;
    cout << "Input the Length: ";
    cin >> rectLength;

    //store width and length in the box objects below

    box.setWidth(rectWidth);
    box.setLength(rectLength);

    //display final rectangle data below
    cout <<"--------------------------------------------------" << endl;
    cout << "Here is the rectangle's date: "<< endl;
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
    cout << "--------------------------------------------------" << endl;
    return 0;

}
