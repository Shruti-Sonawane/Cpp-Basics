#include<iostream>
using namespace std;
int main(){

  int marks = 85;

  // == (To check if the given variable is equal to the value in right)
  // != (To check if the given variable is not equal to the value in right)
  if(marks >= 90 )
  {
    cout<< "You're grade is A"<<endl;
  }
  else if(marks >= 80)
  {
      cout<< "You're grade is B"<<endl;
  }
  else if(marks >= 60)
  {
      cout<< "You're grade is C"<<endl;
  }
  else
  {
    cout<<"You're fail."<<endl;
  }
}
