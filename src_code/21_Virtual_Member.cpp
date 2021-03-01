// Polymorphism--> Virtual member of class...........
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
  virtual int area(){         // virtual function ....over ridden in child class....
    return 0;
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
    return (width*height/2);
  }
};

int main(){
  Triangle trig;
  Rectangle rect;
  Polygon poly;
  Polygon *ptr1 = &rect;
  Polygon *ptr2 = &trig;
  Polygon *ptr3 = &poly;
  ptr1->set_values(4,5);
  cout<<ptr1->area()<<endl;
  ptr2->set_values(6,7);
  cout<<ptr2->area()<<endl;
  ptr3->set_values(8,8);
  cout<<ptr3->area()<<endl;
}