// Pointers Concepts......
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int y=20;
    int *ptr=&x;
    cout<<"x:"<<x<<" y:"<<y<<" ptr:"<<*ptr<<endl;
    *ptr=100;
    cout<<"x:"<<x<<" y:"<<y<<" ptr:"<<*ptr<<endl;
    ptr=&y;
    cout<<"x:"<<x<<" y:"<<y<<" ptr:"<<*ptr<<endl;
}