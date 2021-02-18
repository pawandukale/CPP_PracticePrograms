// creation of class and its members.........
#include<iostream>
using namespace std;

class rectangle{
    int x,y;
    public:
    void setvalues(int,int);
    int area();
};

void rectangle::setvalues(int a,int b){
    x=a;
    y=b;
}
int rectangle::area(){
    return (x*y);
}

int main(){
    rectangle obj;
    obj.setvalues(4,5);
    cout<<"area: "<<obj.area()<<endl;;
}