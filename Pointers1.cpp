#include<iostream>
using namespace std;
int main(){
  int a = 5;
  cout<<"Value of a is: "<<a<<endl;
  cout<<"Address of a from value: "<< &a <<endl;
  cout<<"Value of a from address: "<< *(&a) <<endl;



  int b = 10;  // b is an integer means &b is address of b
  int *c;      //*c as a whole is an integer means c is some address of *c
  c = &b;       // Or you can directly do *c = &b

  cout<<"b = " <<b<<endl;
  cout<<"*c = "<<*c<<endl;

  b = 6;
  cout<<"b = " <<b<<endl;
  cout<<"*c = "<<*c<<endl;
}
