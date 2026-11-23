
#include <iostream>
using namespace std;

class complex {
    int a, b;

    public:
    // creating a constructor
    // Constructor is a special member function with same name as of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever an object is created.

    complex(void); // constructor declaration

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Constructor definition
complex :: complex(void) {
    a = 10;
    b = 0;
}

int main() {
    complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}
