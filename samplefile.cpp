#include<iostream>
using namespace std;
int main(){
  int age[5],i;

  for( i=0 ; i<5 ; i++)
  {
    cout<< "Enter age of student "<< i+1 <<" :";
    cin>> age[i];
  }

  for( i=0 ; i<5 ; i++)
  {
    cout<<"Age of student "<< i+1 <<" is "<<age[i]<<endl;
  }
}
