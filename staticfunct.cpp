#include<iostream>
using namespace std;
class Simple {
public:
    int a;
    static int b;



static void show() {
  cout<<a<<endl;
  cout<<b<<endl;
}

    };

int Simple :: b=20;

int main() {
  Simple :: show();

  return 0;
}
