#include<iostream>
using namespace std;
int main(){

  //int alpha =5  , beta = 9;    // For And success!
  //int alpha =8  , beta = 2;    // For Or success!
  int alpha =12  , beta = 10;      // For failure!

  if(alpha==5 && beta==9){
    cout<<" And Success!!"<<endl;
  }
  else if(alpha==8 || beta==9){
    cout<<"Or Success!!"<<endl;
  }
  else{
    cout<<"Failure!!"<<endl;
  }
}
