#include <iostream>
using namespace std;

class Demo {
    static int num;
public:
    void getnum(){
        cout << "Count : " << ++num << endl;
    }
};

int Demo::num = 3;

int main(){
    Demo d1, d2, d3;
    d1.getnum();
    d2.getnum();
    d3.getnum();

    return 0;
}
