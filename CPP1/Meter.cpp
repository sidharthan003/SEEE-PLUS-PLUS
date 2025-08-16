#include <iostream>
using namespace std;

class FootInch;

class MeterCentimeter {
private:
    int meters;
    int centimeters;

public:
    MeterCentimeter() {
        meters = 0;
        centimeters = 0;
    }

    MeterCentimeter(int m, int cm) {
        meters = m;
        centimeters = cm;
        normalize();
    }

    void setValues(int m, int cm) {
        meters = m;
        centimeters = cm;
        normalize();
    }

    void normalize() {
        if (centimeters >= 100) {
            meters += centimeters / 100;
            centimeters %= 100;
        }
    }

    void display() const {
        cout << meters << " meters and " << centimeters << " centimeters" << endl;
    }

    FootInch toFootInch() const;
};

class FootInch {
private:
    int feet;
    int inches;

public:
    FootInch() {
        feet = 0;
        inches = 0;
    }

    FootInch(int ft, int in) {
        feet = ft;
        inches = in;
        normalize();
    }

    void setValues(int ft, int in) {
        feet = ft;
        inches = in;
        normalize();
    }

    void normalize() {
        if (inches >= 12) {
            feet += inches / 12;
            inches %= 12;
        }
    }

    void display() const {
        cout << feet << " feet and " << inches << " inches" << endl;
    }

    MeterCentimeter toMeterCentimeter() const;
};

FootInch MeterCentimeter::toFootInch() const {
    double totalInches = (meters * 39.3701) + (centimeters * 0.393701);
    int ft = int(totalInches / 12);
    int in = int(totalInches) % 12;
    return FootInch(ft, in);
}

MeterCentimeter FootInch::toMeterCentimeter() const {
    double totalCentimeters = (feet * 30.48) + (inches * 2.54);
    int m = int(totalCentimeters / 100);
    int cm = int(totalCentimeters) % 100;
    return MeterCentimeter(m, cm);
}

int main() {
    MeterCentimeter mc(2, 50);
    mc.display();

    FootInch fi = mc.toFootInch();
    fi.display();

    FootInch fi2(8, 5);
    fi2.display();

    MeterCentimeter mc2 = fi2.toMeterCentimeter();
    mc2.display();

    return 0;
}

