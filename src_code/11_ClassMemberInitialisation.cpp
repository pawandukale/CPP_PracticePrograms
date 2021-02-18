// initialising data members of class outside of the class......
#include<iostream>
using namespace std;
class box{
    public:
    double height,length,breadth;  //declared under public..because we accessing outside of the class
};

int main(){
    box b1;
    box b2;
    double volume=0;
    // box b1 members initialising....
    b1.breadth=5.0;
    b1.height=6.0;
    b1.length=7.0;
    // box b2 members initialising....
    b2.breadth=2.0;
    b2.height=3.0;
    b2.length=4.0;
    volume=b1.height*b1.length*b1.breadth;
    cout<<"volume of box b1: "<<volume<<endl; //box b1 volume

    volume=b2.height*b2.length*b2.breadth;
    cout<<"volume of box b2: "<<volume<<endl; //box b2 volume

}