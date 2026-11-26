
#include <iostream>
using namespace std;

int sum(int a, int b = 5) {
    return a + b;
}

int main() {

    cout << "Sum is: " << sum(10) << endl;

    cout << "Sum is: " << sum(10, 20) << endl;

    return 0;
}
