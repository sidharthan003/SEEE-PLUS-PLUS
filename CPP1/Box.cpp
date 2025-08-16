#include <iostream>
using namespace std;

class Box {
    int length, breadth, height;
    int perimeter, surface_area, volume;

public: 

	Box()
	{
		length = 0;
        breadth = 0;
        height = 0;
	}
	Box(int l, int b, int h)
	{
		length = l;
        breadth = b;
        height = h;
        
        perimeter = 4 * (length + breadth + height);
        surface_area = 2 * (length * breadth + breadth * height + length * height);
        volume = length * breadth * height;
	}
    void setDimensions(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    void calculate() {
        perimeter = 4 * (length + breadth + height);
        surface_area = 2 * (length * breadth + breadth * height + length * height);
        volume = length * breadth * height;
    }

    int getPerimeter() {
        return perimeter;
    }

    int getSurfaceArea() {
        return surface_area;
    }

    int getVolume() {
        return volume;
    } 
};

int main() {
    int l, b, h;
    cout << "Enter the dimensions of the box (length, breadth, height): ";
    cin >> l >> b >> h;

    Box box(l, b, h);

    cout << "Perimeter of the box: " << box.getPerimeter() << endl;
    cout << "Surface area of the box: " << box.getSurfaceArea() << endl;
    cout << "Volume of the box: " << box.getVolume() << endl;
    
    Box lbox;
    lbox.setDimensions(l,b,2*h);
    lbox.calculate();
    
    cout << "Perimeter of the box: " << lbox.getPerimeter() << endl;
    cout << "Surface area of the box: " << lbox.getSurfaceArea() << endl;
    cout << "Volume of the box: " << lbox.getVolume() << endl;
    

    return 0;
}

