//write a c++ program to find simple intrests si=(p*r*n)/100 using values 
#include<iostream>
using  namespace std;
int main()
{
    float P,R,N,SI;
    cout<<"Enter the values of P,R,N:  ";
    cin>>P>>R>>N;
    SI=(P*R*N)/100;
    cout<<"simple intrets is\n"<<SI;
    return 0;
}