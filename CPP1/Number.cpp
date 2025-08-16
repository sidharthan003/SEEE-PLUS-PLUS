#include <iostream>
using namespace std;

class Numbers {

    int num1, num2;

public:
  
    Numbers(int a, int b)  {
	num1 = a;
	num2 = b;
	}

   
    bool isGreater() {
        return num1 > num2;
    }


    bool isSmaller() {
        return num1 < num2;
    }


    bool isEqual() {
        return num1 == num2;
    }

    
    bool isUnequal() {
        return num1 != num2;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;


    Numbers compare(a, b);

  
    cout << "Is the first number greater than the second? ";
    if (compare.isGreater()) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    cout << "Is the first number smaller than the second? ";
    if (compare.isSmaller()) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    cout << "Are the two numbers equal? ";
    if (compare.isEqual()) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    cout << "Are the two numbers unequal? ";
    if (compare.isUnequal()) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}



