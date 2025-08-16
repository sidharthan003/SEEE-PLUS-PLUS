#include <cmath>
#include <iostream>
using namespace std;

class Vector3D {

    float a, b, c;

public:
    
    Vector3D(){
    	float a = 0.0;
    	float b = 0.0;
    	float c = 0.0;
	}
	Vector3D(float x, float y, float z){
		a = x;
		b = y;
		c = z;
	}
    
    float magnitude()  {
        return sqrt(a * a + b * b + c * c);
    }

   
    operator float()  {
        return magnitude();
    }

   
    void display()  {
        cout << "Vector3D(" << a << ", " << b << ", " << c << ")" << std::endl;
    }
};

int main() {
    
    Vector3D vec(3.0, 4.0, 0.0);
    vec.display();
    float magnitude = vec; 
    	cout << "Magnitude: " << magnitude << std::endl;

    return 0;
}

	


