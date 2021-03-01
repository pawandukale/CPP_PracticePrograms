// Function as a friend of class.....

#include<iostream>
using namespace std;
 class CRectangle{
   int width,height;
   public:
   void set_values(int ,int);
   int area(){
     return width*height;
   }
   friend CRectangle duplicate(CRectangle);
 };

 void CRectangle::set_values(int w, int h){
   width=w;
   height=h;
 }

 CRectangle duplicate(CRectangle p){
   CRectangle obj;
   obj.width = p.width*2;
   obj.height = p.height*2;
   return obj; 
 }

 int main(){
   CRectangle rect,drect;
   rect.set_values(4,5);
   cout<<rect.area()<<endl;
   drect = duplicate(rect);
   cout<<drect.area()<<endl;
 }