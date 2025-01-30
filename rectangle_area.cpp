// write a program to print the area of a rectangle by creating a class named 'Area'having one function. length and breadth of the rectangle are entered through the keybord using a paraameterized constructor.

#include<iostream>
using  namespace std;


class Area{
    private:
    int length,breadth;
 
 public:
   Area(int x,int y){
      length=x;
      breadth=y;
   }
   void display(){
     cout<<"Area is:"<<length*breadth;
   }

};

int main()
{
    Area a(10,2);
    a.display();
    return 0;
}