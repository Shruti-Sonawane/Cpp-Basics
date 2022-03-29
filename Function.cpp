#include<iostream>
using namespace std;

int addition(int a, int b){
  int c;
  c = a+b;
  return c;
}

int print(int age[], int size){
  for(int i=0 ; i<size ; i++){
    cout<<"Hello, You're age is "<<age[i]<<endl;
  }
}

int main(){
  int ans;
  ans = addition(5,6);
  cout<<"Answer is "<<ans<<endl;

  int age[] = {20,22,24,26,28};
  print(age,5);
}
