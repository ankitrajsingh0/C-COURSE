#include<iostream>
using namespace std;
int main(){
   /*  cout<<" this is tutorial 9"; */
   int age;
   cout<<" tell me your age "<<endl;
   cin>>age;
   //selection control strecture: if else if else ladder 
   /* if(age < 18){
    cout<<"you can not come to my party"<<endl;
   }
   else if (age == 18){
    cout<<" you are a kid and you will get a kid pass to the party"<<endl;
   }
   cout<<"you can come to the party"<<endl; */
   switch(age){
    case 18:
   /*  code */
   cout<<"you are 18"<<endl;
   break;
    case 22:
       cout<<"you are 22"<<endl;
       break;
    case 2:
       cout<<"you are 2"<<endl;   

   default:
   cout<<" No special class"<<endl;
   
    break;
   }

    return 0;
}