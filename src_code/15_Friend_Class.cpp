// Making class as a friend of other class.........

#include<iostream>
using namespace std;
class Csquare;
class Crectangle{
  int width,height;
  public:
  int area(){
    return width*height;
  }
  void convert(Csquare a);
};

class Csquare{
  int side;
  public:
  void set_side(int a){
    side=a;
  }
  friend class Crectangle;
};

void Crectangle::convert(Csquare a){
  width=a.side;
  height=a.side;
}

int main(){
  Csquare sqr;
  Crectangle rect;
  sqr.set_side(4);
  rect.convert(sqr);
  cout<<rect.area()<<endl;
}