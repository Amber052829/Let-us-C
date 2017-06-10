#include<iostream>
using namespace std;

class Simple{
public:
  int a,b;
  void set(int a,int b){
    this->a=a;
    this->b=b;
    cout<<this<<endl;
  }
  int add() {
      return this->a + this->b;
  }
};
int main() {
  int a;
  Simple s;
  s.set(5,10);
  a = s.add() ;
  cout<<a<<endl;
}
