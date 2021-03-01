// Polymorphism--> Abstract class ...........
#include<iostream>
using namespace std;

class base{
  public:
  virtual void test()=0;
};

class derived1:public base{
  public:
  void test(){
    cout<<"In Derived 1 class....\n";
  }
};

class derived2: public base{
  public:
  void test(){
    cout<<"In derived 2 class.......\n";
  }
};

int main(){
  derived1 d1;
  derived2 d2;
  base *b;
  b=&d1;
  b->test();
  b=&d2;
  b->test();
  d1.test();
  d2.test();
}