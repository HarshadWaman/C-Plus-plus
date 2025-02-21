#include <iostream>
using namespace std;

class shape {
private:
    float width, height;

public:
    shape(float w = 0, float h = 0) : width(w), height(h) {}
    float getwidth() { return width; }
    float getheight() { return height; }

    virtual void area() {
        cout << "Base class area: ";
        if (width != 0 && height != 0)
            cout << width * height;
        else
            cout << "Width and Height must be greater than zero.";
    }
};

class rectangle : public shape {
private:
    float a;

public:
    rectangle(float w, float h) : shape(w, h) {}
    void area() override {
        a = getwidth() * getheight();
        cout << "\nArea of rectangle: " << a;
    }
};

class trangle : public shape {
private:
    float a;

public:
    trangle(float w, float h) : shape(w, h) {}

    void area() override {
        a = 0.5f * getwidth() * getheight();
        cout << "\nArea of Triangle: " << a;
    }
};

int main() {
    rectangle r(2.5, 3.5);
    r.area();

    trangle t(3.5, 5.5);
    t.area();

    return 0;
}