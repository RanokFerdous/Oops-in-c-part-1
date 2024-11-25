#include <iostream>
using namespace std;

class Complex {
public:
    double real, imag;

    Complex(double r = 0, double i = 0) : real(r), imag(i) {}


    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex s(3, 4), t(1, 2);
    Complex v = s + t;
    v.display();
    return 0;
}


//Binary Operators: Operators that work on two operands, e.g., +, -, *, /, ==, !=, <, >, etc.
