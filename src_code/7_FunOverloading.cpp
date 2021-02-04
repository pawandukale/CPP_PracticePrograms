// Function Overloading Concept....

#include<iostream>
#include<string>
using namespace std;
void print(string s);
void print(char s);
void print(int s);
int main(){
    string str="Hello....Welcome";
    char ch='A';
    int i=100;
    print(str);
    print(ch);
    print(i);
}

void print(string s){
    cout<<"str:"<<s<<endl;
}
void print(char s){
    cout<<"char:"<<s<<endl;
}
void print(int s){
    cout<<"int:"<<s<<endl;
}