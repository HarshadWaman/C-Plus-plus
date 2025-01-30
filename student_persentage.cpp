//write a c++ program to accespt the marks of 6 subject from the user and calculet the persentage also  display the result is pass or fail..
#include<iostream>
using  namespace std;
int main()
{
    int m1,m2,m3,m4,m5,m6,add;
    float per;
    cout<<"Enter marks of 6 subject: ";
    cin>>m1>>m2>>m3>>m4>>m5>>m6;
    add=m1+m2+m3+m4+m5+m6;
    per=(add*100)/180;
    cout<<"percentage : "<<per;
    if(per<35)
    cout<<"Result is fail";
    else
    cout<<"Result is pass";
    
    return 0;
}