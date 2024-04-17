#include <iostream>
#include <iomanip>

using namespace std;

class Cricketer{
public:
    int ccode;
    string cname;
    float avg;
public:
    setData(int code, string name, float average){
        ccode = code; cname = name; avg = average;
    }
    getData(){
    cout<<left<<setw(25)<<cname<<setw(10)<<ccode<<setw(10)<<avg<<endl;
    }
};

int main()
{
    Cricketer vk, rs, sky;
    vk.setData(101, "Virat Kohli" , 69.94);
    vk.getData();

    rs.setData(102, "Rohit Sharma" , 97.48);
    rs.getData();

    sky.setData(103, "Surya Kumar Yadav" , 90.39);
    sky.getData();
    return 0;
}
