// Using COnstructor for initialising class data members..............

#include<iostream>
using namespace std;
class student{
  int rollno;
  float marks;
  public:
  student(){          // default constructor
    rollno=0;
    marks=0.0;
  }
  
  student(int r,float m){     //parameteised constructor
    rollno=r;
    marks=m;
  }

  student(student &t){        //copy constructor
    rollno=t.rollno;
    marks=t.marks;
  }

  void showdata(){
    cout<<"\nROll no: "<<rollno<<"\nMarks: "<<marks<<endl;
  }
  ~student(){}
};

int main(){
  student s1;         //calling default constructor 
  student s2(2,86);   //parameterised constructor is geeting called
  student s3(s2);     // copy constructor
  s1.showdata();
  s2.showdata();
  s3.showdata();
}