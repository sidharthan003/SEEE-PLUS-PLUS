#include <iostream>
using namespace std;

class Adder {
    int op1, op2, sum;
    
public:
    void set_Operands(int, int);
    void Calculate();
    int get_sum();
};

void Adder::set_Operands(int op1, int op2) {
    this->op1 = op1;
    this->op2 = op2;
}

void Adder::Calculate() {
    sum = op1 + op2;
}

int Adder::get_sum() {
    return sum;
}


int main() {
    Adder adder;
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    adder.set_Operands(a, b);
    adder.Calculate();

    cout << "The sum is: " << adder.get_sum() << endl;

    return 0;
}