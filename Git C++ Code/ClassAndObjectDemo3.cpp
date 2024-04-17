#include<iostream>
#include<iomanip>

using namespace std;

class Cricketer{
private:
    int ccode;
    string cname;
    float avg;
public:
    void setData(int code, string name, float average){
    ccode = code; cname = name; avg = average;
    }
    void getData(){
        cout<<left<<setw(15)<<cname<<setw(10)<<ccode<<setw(15)<<avg<<endl;
    }
};

int main()
{
    Cricketer vk;
    vk.setData(1001,"Virat Kohli",74.93);
    vk.getData();
    return 0;
}
