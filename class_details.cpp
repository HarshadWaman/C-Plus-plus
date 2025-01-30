// write  a c++ program to print name ,age,city,and  pin on screen using class
#include<iostream>
using  namespace std;

class details
{
    private:
    char name[20];
    int age;
    char city [20];
    int pin;
    public:
    void getdetails()
    {
        cout<<"Enter name,age,city and pin : ";
        cin>>name>>age>>city>>pin;
    }
    void display()
    {
        cout<<"name is: "<<name<<"\n";
        cout<<"age is: "<<age<<"\n";
        cout<<"city is: "<<city<<"\n";
        cout<<"pin is: "<<pin<<"\n";
    }
};

int main()
{
    details d1;
    d1.getdetails();
    d1.display();

    return 0;
}