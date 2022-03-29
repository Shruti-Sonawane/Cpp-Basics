#include<iostream>
using namespace std;
int main(){
  int i = 0;
  do {
    cout<<"Hello World"<<endl;
    i = i+1;
  }while(i<-1);
}
// Here i is not going to be -1 at any cost because i is 0 and we are making i+1 so it becomes 1.
// But still it will print "Hello World" 1 time because do statement do its work first and then check condition in while loop.
