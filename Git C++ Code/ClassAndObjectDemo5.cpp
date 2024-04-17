#include <iostream>
#include <iomanip>

using namespace std;

class Cricketer{
private :
    int ccode;
    string cname;
    float avg;

public :
    Cricketer(){
    ccode = 100;
    cname = "Sachin Tendulkar" ;
    avg = 97.39;
    }
    setData(int code, string name, float average){
    ccode = code; cname = name; avg = average;
    }

    getData(){
    cout<<left<<setw(10)<<ccode<<setw(20)<<cname<<setw(10)<<avg<<endl;
    }
}vk, rs, sky, st;

int main ()
{
    vk.setData(101,"Virat Kohli", 30.10);
    vk.getData();

    rs.setData(102,"Rohit Sharma", 83.04);
    rs.getData();

    sky.setData(101,"Surya Kumar Yadav", 94.39);
    sky.getData();

    st.getData();

    return 0;
}
