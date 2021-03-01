// Template class---> Generic class......
#include<iostream>
using namespace std;

template<class T>
class mypair{
  T a,b;
  public:
  mypair(T x, T y){
    a=x;
    b=y;
  }
  T getmax();
};

template<class T>
T mypair<T>::getmax(){
  T val;
  val=a>b?a:b;
  return val;
}

int main(){
  mypair<int>obj(100,75);     // <int> need to use...type of object we are creating.
  cout<<obj.getmax();
}