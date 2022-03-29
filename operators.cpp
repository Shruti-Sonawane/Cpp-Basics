#include<iostream>
using namespace std;
int main(){

  // Add , sub, mul, div
  float a = 5 , t = 8;

  int add;
  add = a + t;
  cout<<"Addition of "<< a <<" and "<< t <<" : " <<add<<endl;

  int sub;
  sub = t - a;
  cout<<"Subtraction of "<<a<<" and "<<t<<" : "<<sub<<endl;

  int mul;
  mul = a * t;
  cout<<"Multiplication of "<<a<<" and "<<t<<" : "<<mul<<endl;

  float div;
  div = t / a;
  cout<<"Division of "<<a<<" and "<<t<<" : "<<div<<endl;


  // Boolean values 0,1   ,  (< , > signs)
  bool i;
  i = t > a ; //8>5 = true = 1
  cout<<"Boolean i : "<<i<<endl;

  bool j;
  i = t < a ; //8<5 = false = 0
  cout<<"Boolean j : "<<j<<endl;


  // Remainder
  int c = 17 , d = 5;
  int rem;
  rem = c % d;
  cout<<"Remainder of "<<c<<" and "<<d<<" : "<<rem<<endl;
}
