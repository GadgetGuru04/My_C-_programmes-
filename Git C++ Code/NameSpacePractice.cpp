#include<iostream>
#include<iomanip>
using namespace std;

  /*void print(){
    cout<<"This is a default print func."<<endl;
  }*/

  namespace Parag{
    void print(){
      cout<<"This is a function from Parag namespace."<<endl;
    }
  }

  namespace Jay{
    void print(){
      cout<<"This is a function from Jay namespace."<<endl;
    }
  }

using namespace Jay;
  int main (){
    Jay::print();
    Parag::print();
    print();
    return 0;
  }
