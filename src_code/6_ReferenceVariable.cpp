// Understanding reference variable.....

#include<iostream>
using namespace std;
int main(){
    int a=1,b=2,c=3;
    int &x=a;                       //should be initialised...but NULL not allowed.
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<" x:"<<x<<endl;
    x=10;
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<" x:"<<x<<endl;
    x=c;
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<" x:"<<x<<endl;
    a++;
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<" x:"<<x<<endl;
    x++;
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<" x:"<<x<<endl;
    cout<<"address :"<<endl;
    cout<<"a:"<<&a<<" b:"<<&b<<" c:"<<&c<<" x:"<<&x<<endl;
}