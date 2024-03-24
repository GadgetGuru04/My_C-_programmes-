#include <iostream>

using namespace std;

// Swap using call by value
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Overloaded swap using call by reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    // Call by value
    swap(x, y);
    cout << "After swap using call by value: x = " << x << ", y = " << y << endl;

    x = 5;
    y = 10;

    // Call by reference
    swap(x, y);
    cout << "After swap using call by reference: x = " << x << ", y = " << y << endl;

    return 0;
}
