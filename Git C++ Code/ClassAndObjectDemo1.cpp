#include <iostream>
#include <iomanip>

using namespace std;

class Student{
public:
    int ccode;
    string cname;
    float avg;
};
int main(){
    Student vk;
    vk.ccode = 1001;
    vk.cname = "Viral Kohli";
    vk.avg = 20.04;
    cout<<left<<setw(10)<<vk.ccode<<setw(10)<<setw(15)<<vk.cname<<vk.avg<<endl;
return 0;
}
