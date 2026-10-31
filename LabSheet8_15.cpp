// Program 15: Abstraction Using Abstract Class Shape
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // Pure virtual function
    virtual ~Shape() {}      // Virtual destructor for safe delete via base pointer
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) { radius = r; }
    void area() {
        cout << "Area of Circle: " << (3.14159 * radius * radius) << endl;
    }
};

class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) { length = l; breadth = b; }
    void area() {
        cout << "Area of Rectangle: " << (length * breadth) << endl;
    }
};

int main() {
    Shape* s1 = new Circle(5.0f);
    Shape* s2 = new Rectangle(4.0f, 6.0f);
    s1->area();
    s2->area();
    delete s1;
    delete s2;
    return 0;
}
