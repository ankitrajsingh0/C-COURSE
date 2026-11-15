#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void oncs_complement(void); 
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "Incorrect binary number" << endl;
            exit(0);
        }
    }
}

 void binary ::oncs_complement(void)
 {
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
 }
 void binary ::display(void)
 {
    cout<<"Displaying your binary number "<<endl;
    for (int i = 0; i < s.length(); i++){
        cout<<s.at(i);
        
    }
    cout<<endl;
 }

int main()
{
    // OOPs - classic and objects

    // C++  -->initally called --> C with classes by stroustrup
    // class --> extension of structures (in C)
    // structures had limitations
    //    --> members are public
    //    --> No methods
    // classes = structures + more
    // classes --> can have methods and properties
    // classes --> can make few members as private and few as public
    // stectures ini c++ are typedefed
    // you can declore objects along with the class declaration like this:
    /*  class Employee{
       // class definition
     } harry , rohan, lovish; */
    // harry.slary = 8 makes no sense if salary is private

    // nesting of member functions
    binary b;
    b.read();
    b.chk_bin(); 
    b.display();
    b.oncs_complement();
    b.display();

    return 0;
}