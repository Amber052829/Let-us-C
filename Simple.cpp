#include<iostream>
using namespace std;
class Simple {
    int a;
  public:
    void set(int z);
    void show();
};
void Simple :: set() {{

}
      a = z;
    }

void Simple :: show()  {
      cout<<"Value of a: "<<a<<endl; //endl="n"
    } 

int main() {
  Simple s;
  s.set(5);
  s.show();
  return 0;
}
