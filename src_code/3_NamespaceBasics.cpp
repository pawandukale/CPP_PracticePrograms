// Program to understand basics of namespace....

#include<iostream>
using namespace std;
namespace first{
    int x=5;
    int y=10;
}
namespace second{
    int x=7;
    int y=9;
}

int main(){
    using namespace first;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    cout<<"x: "<<second::x<<endl;
    cout<<"y: "<<second::y<<endl;
}