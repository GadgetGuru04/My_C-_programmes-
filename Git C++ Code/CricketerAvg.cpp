#include<iostream>
#include<iomanip>

using namespace std;

class Crickter{
 public :
    int run;
    string name;
    float avg;

  float getAvg();
    string getName();
};

string Crickter::getName(){
  return name;
}

int main(){
  Crickter Rohit;
  Rohit.run = 100;
  Rohit.name = "Rohit";
  Rohit.avg = 45.5;
  cout<<"Name : "<<Rohit.name<<endl;
  cout<<"Runs : "<<Rohit.run<<endl;
  cout<<"Batting Avarage : "<<Rohit.getAvg()<<endl;

  return 0;

}


