// Illustrating New and Delete keyword .....(DMA)

#include<iostream>
using namespace std;

int *input(int *ptr,int size){
  ptr=new int[size];
  for(int i=0;i<size;i++)
  cin>>ptr[i];
  return ptr;
}

void display(int *ptr,int size){
  for(int i=0;i<size;i++)
  cout<<ptr[i]<<" ";
  cout<<endl;
}

int main(){
  int *p=NULL;
  int size;
  cout<<"enter size:"<<endl;
  cin>>size;
  p=input(p,size);
  display(p,size);
  delete[]p;
  p=NULL;
}