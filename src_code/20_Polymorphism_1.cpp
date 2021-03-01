// Polymorphism--> Pointer to base class....
#include<iostream>
using namespace std;

class Polygon{
  protected:
  int width,height;
  public:
  void set_values(int a,int b){
    width=a;
    height=b;
  }
};

class Rectangle:public Polygon{
  public:
  int area(){
    return width*height;
  }
};

class Triangle:public Polygon{
  public:
  int area(){
    return width*height/2;
  }
};

int main(){
  Rectangle rect;
  Triangle trig;
  Polygon *ptr1 = &rect;
  Polygon *ptr2 = &trig;
  ptr1->set_values(4,5);
  ptr2->set_values(6,8);
  cout<<rect.area()<<endl;
  cout<<trig.area()<<endl;
}