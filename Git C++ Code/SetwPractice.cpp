#include<iostream>
#include<iomanip>
using namespace std;
int main(){

  cout<<"NFSU"<<"SCSDF"<<endl; //1
  cout<<setw(9)<<"NFSU"<<"SCSDF"<<endl; //2
  cout<<left<<setw(9)<<"NFSU"<<"SCSDF"<<endl; //3
  cout<<right<<setw(9)<<"NFSU"<<"SCSDF"<<endl; //4
  cout<<setw(9)<<left<<"NFSU"<<"SCSDF"<<endl; //5
  cout<<setw(9)<<right<<"NFSU"<<"SCSDF"<<endl; //6
  cout<<setw(9)<<"NFSU"<<left<<"SCSDF"<<endl; //7
  cout<<setw(9)<<"NFSU"<<right<<"SCSDF"<<endl; //8
  cout<<setw(9)<<"NFSU"<<"SCSDF"<<left<<endl; //9
  cout<<setw(9)<<"NFSU"<<"SCSDF"<<right<<endl; //10

}
