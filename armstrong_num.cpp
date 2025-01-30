// c++ program for armstrong number 
#include<iostream>
using  namespace std;
int main()
{
    int num,originalnum,remainder,result=0;
    cout<<"Enter a three digite integer number: ";
    cin>>num;
    while(originalnum=0)
    {
        remainder=originalnum%10;
        result+=remainder*remainder*remainder;
        originalnum/=10;
    }
    if(result==num)
    cout<<num<<"is an armstrong number";
    else
    cout<<num<<"is not armstrong number";
    
    return 0;
}