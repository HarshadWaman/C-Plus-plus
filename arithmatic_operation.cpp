// write a c++ program to read two numbers from the useres and print their add,sub,mult,div
#include<iostream>
using  namespace std;
int main()
{
    int num1,num2,add,sub,mult;
    float div;
    cout<<"Enter the two number: ";
    cin>>num1>>num2;
    add=num1+num2;
    sub=num1-num2;
    mult=num1*num2;
    div=num1/num2;
    cout<<"add is: "<<add;
    cout<<"sub is: "<<sub;
    cout<<"mult is: "<<mult;
    cout<<"div is: "<<div;
    
    return 0;
}