#include <iostream>
using namespace std;

class Shape3D{
	public:
	
	 void printArea();
	 void printVolume();
	
};

class Cylinder: public Shape3D{
	private:
		float radius;
		float height;
	public:
		Cylinder(float r,float h){
			radius = r;
			height = h;
		}	
		
	void printVolume() {
		float volume = 3.1 * radius * radius * height;
		cout<< "The volume of Cylinder:"<< volume<<endl;
		
	}	
	void printArea(){
		float area = 3.14 * radius * (radius + height);
		cout<< "The Area of Cylinder:"<< area<<endl;
	}
};
class Sphere: public Shape3D{
	private: 
		float radius;
	public:
		Sphere(float r){
			radius = r;
		}	
	void printVolume(){
		float volume = (4.0/3.0) * 3.14 * radius * radius * radius;
		cout<< "The volume of Sphere:"<< volume<< endl;
	
	}	
	void printArea(){
		float area = 4 * 3.14 * radius * radius;
		cout<< "The arae of Sphere:"<< area << endl;
	}
	
};
int main() {
    float radius, height;

    
    cout << "Enter the radius and height of the Cylinder: ";
    cin >> radius >> height;
    Cylinder cylinder(radius, height);
    cylinder.printVolume();
    cylinder.printArea();

    
    cout << "\nEnter the radius of the Sphere: ";
    cin >> radius;
    Sphere sphere(radius);
    sphere.printVolume();
    sphere.printArea();

    return 0;
}
	
