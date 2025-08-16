#include <iostream>
using namespace std;

class Circle {
     double radius;
     double pi = 3.14;  

public:
    void set_Radius(double r) {
        radius = r;
    }

    double get_Area() {
        return pi * radius * radius;
    }

    double get_Perimeter() {
        return 2 * pi * radius;
    }
};

int main() {
    double r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    Circle circle;
    circle.set_Radius(r);  

   
    cout << "Area of the circle: " << circle.get_Area() << endl;
    cout << "Perimeter of the circle: " << circle.get_Perimeter() << endl;

    return 0;
}


 
