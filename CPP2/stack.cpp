#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack {
private:
    int top;
    int arr[MAX_SIZE];

public:
    Stack() : top(-1) {}

    bool operator+(int x) {
        if (top >= (MAX_SIZE - 1)) {
            cout << "Stack Overflow\n";
            return false;
        } else {
            arr[++top] = x;
            return true;
        }
    }

    int operator-() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return 0;
        } else {
            return arr[top--];
        }
    }

    int operator*(int) const {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return 0;
        } else {
            return arr[top];
        }
    }

    Stack operator~() const {
        Stack reversedStack;
        for (int i = top; i >= 0; i--) {
            reversedStack + arr[i];
        }
        return reversedStack;
    }

    int operator--() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return 0;
        } else {
            return arr[top--];
        }
    }

    friend Stack operator+(const Stack& s1, const Stack& s2) {
        Stack result;

        for (int i = 0; i <= s1.top; i++) {
            result + s1.arr[i];
        }

        for (int i = 0; i <= s2.top; i++) {
            if (result.top >= MAX_SIZE - 1) {
                cout << "Stack Overflow during concatenation\n";
                break;
            }
            result + s2.arr[i];
        }

        return result;
    }

    friend ostream& operator<<(ostream& os, const Stack& s) {
        os << "Stack: ";
        for (int i = 0; i <= s.top; i++) {
            os << s.arr[i] << " ";
        }
        os << endl;
        return os;
    }
};

int main() {
    Stack s1, s2;

    s1 + 10;
    s1 + 20;
    s1 + 30;
    s1 + 40;

    s2 + 50;
    s2 + 60;
    s2 + 70;

    cout << "Stack 1:" << endl;
    cout << s1;

    cout << "Stack 2:" << endl;
    cout << s2;

    Stack concatenatedStack = s1 + s2;
    cout << "Concatenated Stack:" << endl;
    cout << concatenatedStack;

    Stack reversedStack = ~s1;
    cout << "Reversed Stack 1:" << endl;
    cout << reversedStack;

    int poppedValue = --s1;  
    cout << "Popped value from Stack 1: " << poppedValue << endl;
    cout << "After popping from Stack 1:" << endl;
    cout << s1;

    int topValue = s1 * 0;
    cout << "Top value (peek) of Stack 1: " << topValue << endl;

    return 0;
}
