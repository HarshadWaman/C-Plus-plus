/* write  a program to display addition ,subtraction,multiplication ,and division of two integers on screen declare class caculate. 
declare data members num1,num2 in the privet section write a members function of intialize num1 and num2 wreite member function for each operation.*/
#include<iostream>
using  namespace std;


class calculation
{
    private:
    int num1,num2,num;
    public:

    void getdetails()
    {
        
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number :";
        cin>>num2;
    }
    void add()
    {
        cout<<"Addition: "<<(num1+num2)<<endl;

    }
    void subtract()
    {
        cout<<"subtraction: "<<(num1-num2)<<endl;
    }
    void multiply()
    {
        cout<<"Multiplication: "<<(num1*num2)<<endl;
    }
    void divid()
    {
        if(num2!=0)
        {
            cout<<"Division : "<<(num1/num2)<<endl;

        }
        else
        {
            cout<<"Error:division by zero is not allowed"<<endl;
        }
    }
};

int main()
{
    calculation calc;
    calc.getdetails();
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divid();
    
    return 0;
}