#include<iostream>

using namespace std;

class Rectangle {
    int length;
    int breadth;

public:
    void set_Length(int l) {
        length = l;
    }

    void set_Breadth(int b) {
        breadth = b;
    }

    int get_Area() {
        return length * breadth;
    }

    int get_Perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    int l;
    int b;
    cout << "Enter the length and breadth of the Rectangle: ";
    cin >> l >> b;

    Rectangle rectangle;
    rectangle.set_Length(l);
    rectangle.set_Breadth(b);

    cout << "Area of the rectangle: " << rectangle.get_Area() << endl;
    cout << "Perimeter of the rectangle: " << rectangle.get_Perimeter() << endl;

    return 0;
}
