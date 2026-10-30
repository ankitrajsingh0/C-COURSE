#include <iostream>
using namespace std;

int main() {

    typedef struct employee
     {
        /* data */
        int eId;
        char favChar;
        float Salary;
    }ep;

    
    ep ram;
    ep sita;
    ep ankit; 

    ram.eId = 1;
    ram.favChar = 'A';
    ram.Salary = 15000000;

    cout << "Employee ID: " << ram.eId << endl;
    cout << "Favourite Character: " << ram.favChar << endl;
    cout << "Employee Salary: " << ram.Salary << endl;

    return 0;
}