/*write a program with a parent class animal. 
inside it defines a nmae and an age variable and a set_value () function. then 
create two subclasses zebra telling the age and name of the 
animal also giving some extra information for both subclasses 
(e.g. place of origine).place of origine of dolphine is water.*/
#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
    int age;

public:
    Animal(string n, int a) : name(n), age(a) {}

    void display() {
        cout << "Animal Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
    }
};


class Zebra : public Animal {
private:
    string placeOfOrigin;

public:
    Zebra(string n, int a, string origin) : Animal(n, a), placeOfOrigin(origin) {}

    void display() {
        Animal::display();
        cout << "Place of Origin: " << placeOfOrigin << endl;
    }
};


class Dolphin : public Animal {
private:
    string placeOfOrigin;

public:
    Dolphin(string n, int a, string origin) : Animal(n, a), placeOfOrigin(origin) {}

    void display() {
        Animal::display();
        cout << "Place of Origin: " << placeOfOrigin << endl;
    }
};

int main() {
    Zebra z("Zebra", 5, "Earth");
    Dolphin d("Dolphin", 8, "Water");

    cout << "Zebra Details:" << endl;
    z.display();
    cout << endl;

    cout << "Dolphin Details:" << endl;
    d.display();
    return 0;
}