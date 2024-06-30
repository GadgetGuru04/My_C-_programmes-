#include <iostream>
#include <cmath>

using namespace std;

// Base class
class Shape {
public:
    void draw(){
        cout<<"Drawing shape"<<endl;
    }
    double area(){
        cout<<"Area of Shape"<<endl;
    }
};

// Derived class for Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    void draw(){
        cout << "Drawing a Circle" << endl;
    }

    double area() {
        return M_PI * radius * radius;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void draw(){
        cout << "Drawing a Rectangle" << endl;
    }

    double area(){
        return length * width;
    }
};

// Derived class for Triangle
class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}

    void draw(){
        cout << "Drawing a Triangle" << endl;
    }

    double area(){
        return 0.5 * base * height;
    }
};

int main() {
    Circle C(20);
    C.draw();
    cout<<"Area of Circle:"<<C.area()<<endl;
    Rectangle R(20,30);
    R.draw();
    cout<<"Area of Rectangle:"<<R.area()<<endl;
    Triangle T(1,20);
    T.draw();
    cout<<"Area of Triangle:"<<T.area()<<endl;

}
