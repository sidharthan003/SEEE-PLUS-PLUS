#include <iostream>
#include <cmath>
using namespace std;

class Vector3D {
    float a, b, c;

public:

    Vector3D() : a(0), b(0), c(0) {}


    Vector3D(float x, float y, float z) : a(x), b(y), c(z) {}

  
    float getMagnitude() const {
        return sqrt(a * a + b * b + c * c);
    }

   
    void print() const {
        cout << a << "i ";
        if (b >= 0) cout << "+ " << b << "j ";
        else cout << "- " << -b << "j ";
        
        if (c >= 0) cout << "+ " << c << "k" << endl;
        else cout << "- " << -c << "k" << endl;
    }


    static Vector3D add(const Vector3D &v1, const Vector3D &v2) {
        return Vector3D(v1.a + v2.a, v1.b + v2.b, v1.c + v2.c);
    }


    static float dotProduct(const Vector3D &v1, const Vector3D &v2) {
        return v1.a * v2.a + v1.b * v2.b + v1.c * v2.c;
    }


    static Vector3D crossProduct(const Vector3D &v1, const Vector3D &v2) {
        float crossA = v1.b * v2.c - v1.c * v2.b;
        float crossB = v1.c * v2.a - v1.a * v2.c;
        float crossC = v1.a * v2.b - v1.b * v2.a;
        return Vector3D(crossA, crossB, crossC);
    }
};

int main() {
    float x1, y1, z1, x2, y2, z2;

  
    cout << "Enter components of the first vector (a, b, c): ";
    cin >> x1 >> y1 >> z1;
    Vector3D v1(x1, y1, z1);

    
    cout << "Enter components of the second vector (a, b, c): ";
    cin >> x2 >> y2 >> z2;
    Vector3D v2(x2, y2, z2);

    cout << "\nVector v1: ";
    v1.print();
    cout << "Magnitude of v1: " << v1.getMagnitude() << endl;

    cout << "\nVector v2: ";
    v2.print();
    cout << "Magnitude of v2: " << v2.getMagnitude() << endl;

    Vector3D v3 = Vector3D::add(v1, v2);
    cout << "\nAddition of v1 and v2: ";
    v3.print();

    float dot = Vector3D::dotProduct(v1, v2);
    cout << "Dot product of v1 and v2: " << dot << endl;

   
    Vector3D cross = Vector3D::crossProduct(v1, v2);
    cout << "Cross product of v1 and v2: ";
    cross.print();

    return 0;
}

