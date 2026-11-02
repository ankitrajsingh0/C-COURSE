#include <iostream>
using namespace std;

 inline int product(int a , int b){
    //Not recommended to use below lines with inline function 
    // static int c =0; //this execute only oncer
    // c = c+1; //next time this function is run, the value of c will be retained 
     return a*b;
 }

 float moneyReceived(int currentMoney , float factor = 1.04){
    return currentMoney * factor;
 }

int main() {
    int a , b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"if you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<<"Rs after 1 year"<<endl;
    cout<<"For VIP: if you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.10)<<"Rs after 1 year"<<endl;
    
return 0;
}