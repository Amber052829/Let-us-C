#include<iostream>
using namespace std;
class Simple {
public:
    int a;   //instance variable
    static int b;   //
    void show() {
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
    }
};
int Simple :: b;   //required initailization of static member of class.
int main() {
  Simple s;
  cout<<"Default :"<<Simple :: b<<endl;
  s.a = 67;
  s.b = 34;
  Simple s1;
  s1.a = 90;
  Simple :: b = 112;    //Scope Resolution operator
  //s1.b = 9;
  s1.show();

  return 0;
}