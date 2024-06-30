#include <iostream>
using namespace std;

class Demo {
    int num;
public:
    void getnum(){
        num = 3;
        cout << "Count : " << ++num << endl;
    }
};

int main(){
    Demo d1, d2, d3;
    d1.getnum();
    d2.getnum();
    d3.getnum();

    return 0;
}
