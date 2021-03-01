#include<iostream>
using namespace std;

class mother{
  public:
  mother(){
    cout<<"mother:no parameters\n";
  }
  mother(int a){
    cout<<"mother:int parameters\n";
  }
};

class daughter:public mother{
  public:
  daughter(int a){
    cout<<"daughter:int parameters\n";
  }
};

class son:public mother{
  public:
  son(int a):mother(a){
    cout<<"son:int parameter\n";
  }
};

int main(){
  daughter abc(0);
  son xyz(0);
}