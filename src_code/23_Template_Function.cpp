// Template function.......
#include<iostream>
using namespace std;
template<class T>
T GetMax (T a,T b){
  T result;
  result=(a>b)?a:b;
  return result;
}

int main(){
  int i=15,j=6,k;
  float x=2.44,y=4.55,z;
  k=GetMax<int>(i,j);       //you can use GetMax(i,j); also
  z=GetMax<float>(x,y);
  cout<<k<<endl;
  cout<<z<<endl;
}