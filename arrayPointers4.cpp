#include<iostream>
using namespace std;
int main(){
  int arr[4];

  *arr = 32;
  *(arr+1) = 34;
  *(arr+2) = 36;
  *(arr+3) = 38;

  cout<< *arr <<endl;
  cout<< *(arr+1) <<endl;
  cout<< *(arr+2) <<endl;
  cout<< *(arr+3) <<endl;

}
