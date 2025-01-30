//write a c++ program to write factor of number 
#include<iostream>
using  namespace std;
int main()
{
    int num;
    unsigned long long factorial = 1;
    cout<<"Enter a positive integer: ";
    cin>>num;
    if(num<0)
    {
        cout<<"factorial of a negative number doesn't exist"<<endl;
    }
    else
    {
        for(int i=1;i<=num;++i)
        {
            factorial *=i;
        }
        cout<<"factorial of"<<num<<"="<<factorial<<endl;
    }
    return 0;
}