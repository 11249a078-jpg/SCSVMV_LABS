#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
 
    Rectangle(double l, double w) : length(l), width(w) {}

 
    inline double area() const {
        return length * width;
    }

 
    inline void display() const {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    double length, width;

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    
    Rectangle rect(length, width);

    rect.display();
    cout << "Area of rectangle: " << rect.area() << endl;

    return 0;
}
