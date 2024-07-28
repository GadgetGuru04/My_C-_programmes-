#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void show() {
        cout << "Base class" << endl;
    }
};

// Derived class 1
class Derived1 : virtual public Base {
public:
    void show() {
        cout << "Derived 1 class" << endl;
    }
};

// Derived class 2
class Derived2 : virtual public Base {
public:
    void show() {
        cout << "Derived 2 class" << endl;
    }
};

// Multiple inheritance
class Derived3 : public Derived1, public Derived2 {
public:
    void show() {
        cout << "Derived 3 class" << endl;
    }
};

int main() {
    Derived3 d;
    d.show();       // Calls Derived3's show() method
    d.Derived1::show(); // Calls Derived1's show() method
    d.Derived2::show(); // Calls Derived2's show() method

    // If Base class's show() method is needed
    d.Base::show();    // Calls Base's show() method

    return 0;
}
