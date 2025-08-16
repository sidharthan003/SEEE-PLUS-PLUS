#include<iostream>
using namespace std;
class Geometry{
	int s;
	int l;
	float r;
	int b;
	int h;
	
	public:
		static int getPerimeter(int s){
			return 4 * s;
		}
		static int getPerimeter(int s,int h=5)
		{
			return s*s*h;
		}
		static int getPerimeter (int l , int b){
			return 2 * (l + b);
		}
		static float getPerimeter(float r){
			return 2 * 3.14 * r;
		}
		static float getPerimeter(int h , float r ){
			return 4 * r + 2 * h;
		}
		static float getPerimeter(int l,int b,int h){
			return 4 * (l + b) + 4 * h;
		}
		static int getArea(int s){
			return s * s;
		}
		static float getArea(float r){
			return 3.14 * r * r;
			}
		static int getArea(int l, int b){
			return l * b;
		}
		static float getArea(int h , float r){
			return 2 * 3.14 * r * h + * 3.14 * r * r ;
		}
		static float getArea(int l, int b, int h){
			return 2 * (l * b + b * h + l * h);
		}
		static int getVolume (int l, int b, int h ){
			return l * b * h;
		}
		static float getVolume(int h ,float r){
			return 3.14 * r * r * h;
		}
		
};
int main() {
    
    int squareSide = 5;
    int rectangleLength = 5;
    int rectangleBreadth = 10;
    float circleRadius = 7.5;
    int cylinderHeight = 10;
    float cylinderRadius = 4.0;


    cout << "Perimeter of square with side " << squareSide << " = " << Geometry::getPerimeter(squareSide) << endl;
    cout << "Perimeter of circle with radius " << circleRadius << " = " << Geometry::getPerimeter(circleRadius) << endl;
    cout << "Perimeter around cylinder with height " << cylinderHeight << " and radius " << cylinderRadius << " = " << Geometry::getPerimeter(cylinderHeight, cylinderRadius) << endl;
    cout << "Perimeter of the prism with length" << rectangleLength << "and breadth" << rectangleBreadth << "and Height" << cylinderHeight <<"=" << Geometry::getPerimeter(rectangleLength,rectangleBreadth,cylinderHeight)<< endl;
	cout << "Area of square with side " << squareSide << " = " << Geometry::getArea(squareSide) << endl;
    cout << "Area of circle with radius " << circleRadius << " = " << Geometry::getArea(circleRadius) << endl;
    cout << "Total surface area of cylinder with height " << cylinderHeight << " and radius " << cylinderRadius << " = " << Geometry::getArea(cylinderHeight, cylinderRadius) << endl;
    cout << "Area of square with side " << squareSide << " = " << Geometry::getPerimeter(squareSide) << endl;
    cout << "Perimeter of circle with radius " << circleRadius << " = " << Geometry::getPerimeter(circleRadius) << endl;
    cout << "Perimeter around cylinder with height " << cylinderHeight << " and radius " << cylinderRadius << " = " << Geometry::getPerimeter(cylinderHeight, cylinderRadius) << endl;
    return 0;
}