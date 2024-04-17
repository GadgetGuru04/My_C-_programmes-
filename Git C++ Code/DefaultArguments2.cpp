#include <iostream>

using namespace std;

void greet(string name = "Guest", int age = 0) {
    cout << "Hello, " << name << "! ";

    if (age != 0)
        cout << "You are " << age << " years old.";
    else
        cout << "I don't know your age.";
        cout << endl;
}

int main() {

    greet();

    greet("Alice");

    greet("Bob", 25);

    return 0;
}

