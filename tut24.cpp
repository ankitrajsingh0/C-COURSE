#include <iostream>
using namespace std;
 class Employee{
    int id;
    static int count;

    public:
    void setData(void){
        cout<<"Enter the id"<<endl;  
        cin>>id;
        count ++;

    }
    void getData(void){
        cout<<"The id of this employee is " <<id<<" and this is employee number "<<count<<endl;
    }
    static void getCount(void){
        //cout<<"id" throw an error
        cout<<"The vslue of count is "<<count<<endl;
    }
 };

 int Employee :: count; //default value is 0 
int main() {

   Employee harry , rohan , ram;
   
   //harry.id =1;
   //harry.count =1; //conot do this as id and count are private
   harry.setData();
   harry.getData();
   Employee::getCount();

   rohan.setData();
   rohan.getData();
   Employee::getCount();


   ram.setData();
   ram.getData();
   Employee::getCount();
 

   return 0;
} 