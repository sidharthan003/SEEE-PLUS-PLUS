#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
   
    Rectangle(double w, double h)   {
		width = w;
		height = h;
	}

    
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }

    
    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }

    
    double area() const {
        return width * height;
    }

    
    double perimeter() const {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rect(5.0, 10.0);
    cout << "Width: " << rect.getWidth() << ", Height: " << rect.getHeight() << endl;
    cout << "Area: " << rect.area() << ", Perimeter: " << rect.perimeter() << endl;

    return 0;
}
