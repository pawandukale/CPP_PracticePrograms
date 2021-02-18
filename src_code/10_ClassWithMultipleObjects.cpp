#include<iostream>
using namespace std;

class square{
    int side;
    public:
    void setvalues(int a){
        side=a;
    }
    int area(){
        return (side*side);
    }
};

int main(){
    square s1;
    square s2;
    s1.setvalues(5);
    s2.setvalues(10);
    cout<<"area of s1: "<<s1.area()<<endl;
    cout<<"area of s2: "<<s2.area()<<endl;
}