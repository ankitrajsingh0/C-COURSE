#include<iostream>
using namespace std ;
int c=45;
int main(){
   // int a,b,c;
    /*
    cout<<"enter the value of a :"<<endl;
    cin>>a;
    cout<<"enter the value of b :"<<endl;
    cin>>b;
    c = a + b;
    cout<<"the sum is"<<c;
    cout<<"the global is"<<::c;

    //************Float,Double Long Double Literals*************
   /* float d= 34.4F;
    long double e = 34.4L;
    cout<<" the size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<" the size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<" the size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<" the size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<" the size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"the  value of dis "<<d<<endl<<"the value of e is "<<e<<endl;*/
    
    //************Refrence Variables*************
   // shubham ---> shubh ---->guddu;
    // Rohan ---> Rohu ----> Dangures Coder 
   // float x=445;
    // float & y =x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //*********typecasting **********/
    int a = 45;
    float b =45.46;

    cout<<" the value of a is "<<(float)a<<endl;
    cout<<" the value of a is "<<float(a)<<endl;


    cout<<" the value of b is "<<(int)b<<endl;
    cout<<" the value of b is "<<int(b)<<endl;
    int c = int (b);

    
    cout<<" The expression is "<<a +b<<endl;
    cout<<" The expression is "<<a +int(b)<<endl;
    cout<<" The expression is "<<a +(int)b<<endl;
    return 0;
}    