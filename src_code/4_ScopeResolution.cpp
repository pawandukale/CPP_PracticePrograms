// Program to understadn use of scope resolution....

#include<iostream>
using namespace std;
int a=10;
int main(){
    int a=20;
    cout<<"a: "<<a<<endl;
    cout<<"A: "<<::a<<endl;
    a=100;
    cout<<"a: "<<a<<endl;
    cout<<"A: "<<::a<<endl;
    ::a=50;
    cout<<"a: "<<a<<endl;
    cout<<"A: "<<::a<<endl;
}