#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(double len, double brd) {
        length = len;
        breadth = brd;
    }

    Rectangle(double side) {
        length = side;
        breadth = side;
    }

    double calculateArea() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect1;
    Rectangle rect2(5, 3);
    Rectangle square(4);

    cout << "Area of rect1 (length 0, breadth 0): " << rect1.calculateArea() << endl;
    cout << "Area of rect2 (length 5, breadth 3): " << rect2.calculateArea() << endl;
    cout << "Area of square (side 4): " << square.calculateArea() << endl;

    return 0;
}
