//there are two types of header files
//1. System header files : it comes with the compiler
#include<iostream>
//2. User defined header files :it is written by programmer
//#include"this.h"//--> this will produce an arror if this.h is no present in current directory

using namespace std;
int main (){
    int a=4, b=5;
    cout<<"Operators in c++\n";
    cout<<"following are the types of operators in c++\n";
    //arthmetic operators
    cout<<" the value of a+b is "<<a+b<<endl;
    cout<<" the value of a-b is "<<a-b<<endl;
    cout<<" the value of a*b is "<<a*b<<endl;
    cout<<" the value of a/b is "<<a/b<<endl;
    cout<<" the value of a%b is "<<a%b<<endl;
    cout<<" the value of a++ is "<<a++<<endl;
    cout<<" the value of a-- is "<<a--<<endl;
    cout<<" the value of ++a is "<<++a<<endl;
    cout<<" the value of --a is "<<--a<<endl;
    cout<<endl;


    //assignment operators --> used to assign value to variables
    //int a=3, b=9;
   // char d='d';
    // comparison operators
    cout<<"following are the comparison operators in c++"<<endl;
    cout<<" the value of a==b is "<<(a==b)<<endl;
    cout<<" the value of a>b is "<<(a>b)<<endl;
    cout<<" the value of a<b is "<<(a<b)<<endl;
    cout<<" the value of a>=b is "<<(a>=b)<<endl;
    cout<<" the value of a<=b is "<<(a<=b)<<endl;

    return 0;
    
}