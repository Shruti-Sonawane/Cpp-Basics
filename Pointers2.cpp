#include<iostream>
using namespace std;

void addOne(int &a){
  a = a + 1;
  cout<< "Value of a in function: "<< a <<endl;
}

int main(){

  int a = 5;
  addOne(a);
  cout<< "Value of a: "<< a <<endl; // Output will be 5 only if we use only a in function pass insted of &a
}
