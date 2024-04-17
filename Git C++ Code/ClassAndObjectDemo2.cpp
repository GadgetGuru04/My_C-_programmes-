#include <iostream>
#include <iomanip>

using namespace std;

class Cricketer{
private:
    int ccode;
    string cname;
    int avg;

public:
    void setData(){
        ccode = 1001; cname = "Virat Kohli"; avg = 94.58;
    }
    void getData(){
        cout<<left<<setw(15)<<cname<<setw(10)<<ccode<<setw(10)<<avg<<endl;
    }
};

int main ()
{
    Cricketer vk;
    vk.setData();
    vk.getData();
    return 0;
}
