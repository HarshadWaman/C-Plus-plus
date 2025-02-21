/*create a class "moble" with attributes:brand,price,clor,width,height. 
use a constructor to set default values of these attributes. 
write function to display details of all attributes.*/
#include <iostream>
using namespace std;

class Mobile {
private:
    string brand;
    double price;
    string color;
    float width;
    float height;

public:
    
    Mobile() : brand("oppo A1k"), price(8000.0), color("black"), width(5.0), height(15.0) {}

    Mobile(string b, double p, string c, float w, float h) {
        brand = b;
        price = p;
        color = c;
        width = w;
        height = h;
    }

    
    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        if (color == "black")
            cout << "Color: " << color << endl;
        else
            cout << "Color: Unknown" << endl;

        cout << "Width: " << width << " mm" << endl;
        cout << "Height: " << height << " mm" << endl;
    }
};

int main() {
    
    Mobile phone1;
    phone1.displayDetails();

    cout << endl;
    Mobile phone2("Apple", 999.99, "white", 70, 150);
    phone2.displayDetails();

    return 0;
}