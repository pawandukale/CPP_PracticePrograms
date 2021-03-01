//Operator overloading on complex number....

#include<iostream>
using namespace std;
class complex{
  float real,img;
  public:
  complex(){
    real=img=0;
  }
  void getdata(){
    cin>>real>>img;
  }
  void putdata(){
    cout<<real<<"+"<<img<<"i"<<endl;;
  }
  complex operator+(complex c1);
  complex operator-(complex c1);
  complex operator*(complex c1);
  complex operator/(complex c1);
};

complex complex::operator+(complex c1){
  complex temp;
  temp.real=real+c1.real;
  temp.img=img+c1.img;
  return temp;
}

complex complex::operator-(complex c1){
  complex temp;
  temp.real=real-c1.real;
  temp.img=img-c1.img;
  return temp;
}

complex complex::operator*(complex c1){
  complex temp;
  temp.real=real*c1.real;
  temp.img=img*c1.img;
  return temp;
}

complex complex::operator/(complex c1){
  complex temp;
  temp.real=real/c1.real;
  temp.img=img/c1.img;
  return temp;
}

int main(){
  complex c1,c2,c3;
  cout<<"enter complex number: "<<endl;
  c1.getdata();
  cout<<"enter complex number: "<<endl;
  c2.getdata();
  cout<<"you entered :"<<endl;
  c1.putdata();
  c2.putdata();
  c3=c1+c2;
  cout<<"\naddition is: "<<endl;
  c3.putdata();
  c3=c2-c1;
  cout<<"\nsubtraction is: "<<endl;
  c3.putdata();
  c3=c2*c1;
  cout<<"\nmultipplication is: "<<endl;
  c3.putdata();
  c3=c2/c1;
  cout<<"\ndivision is: "<<endl;
  c3.putdata();
}