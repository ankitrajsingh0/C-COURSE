#include <iostream>
using namespace std;

class Complex {
    int a, b;

    public:


    Complex(int X, int Y ); // constructor declaration

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(int X, int Y)  //---->This is a default constractor as it takes no parameters

 {
    a = X;
    b = Y;
}

int main() {
//Implicit call
    Complex a(4, 6);

    //Explicit call 
    Complex b = Complex(5, 7);

    a.printNumber();
    b.printNumber();
return 0;
}