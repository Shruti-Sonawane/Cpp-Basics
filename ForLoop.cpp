#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<" Enter number of students : ";
  cin>>n;


  int age[n];

  for(int i=0; i<n ; i++){
    cout<<"Write age of student "<<i+1<<" : ";
    cin>>age[i];
  }

  for(int i=0; i<n ; i++){
    cout<<"Age of student "<< i+1 <<" is :"<<age[i]<<endl;
  }
}
