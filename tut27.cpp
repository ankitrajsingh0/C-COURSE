
#include <iostream>
using namespace std;

// Forward declaration
class complex;

class calculator {
public:
    int add(int a, int b) {
        return (a + b);
    }

    int sumRealComplex(complex, complex);
};

class complex {
    int a, b;

    friend int calculator::sumRealComplex(complex o1, complex o2);

public:
    void setNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator::sumRealComplex(complex o1, complex o2) {
    return (o1.a + o2.a);
}

int main() {
    complex c1, c2;
    calculator calc;

    c1.setNumber(1, 2);
    c1.printNumber();

    c2.setNumber(3, 4);
    c2.printNumber();

    int result = calc.sumRealComplex(c1, c2);

    cout << "The sum of real parts is " << result << endl;

    return 0;
}
