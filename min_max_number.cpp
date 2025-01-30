// write a c++ program to mix and max number in values
#include<iostream>
using  namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    if(num1<num2)
    {
        cout<<"minimum number : "<<num1<<endl;
        cout<<"maximum number: "<<num2<<endl;
    }
    else
    if(num1>num2)
    {
        cout<<"minimum number : "<<num2<<endl;
        cout<<"maximum number : "<<num1<<endl;
    }
    else
    {
        cout<<"Both number are equale: "<<num1<<endl;
    }
    return 0;
}