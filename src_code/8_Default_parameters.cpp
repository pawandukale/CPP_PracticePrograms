// Defsult value in parameters......
#include<iostream>
using namespace std;

int divide(int a,int b=2){
    int r;
    r=a/b;
    return r;
}

int main(){
    cout<<divide(4)<<endl;
    cout<<divide(12,3)<<endl;
}