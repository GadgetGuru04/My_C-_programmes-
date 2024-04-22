#include<iostream>
#include<iomanip>
using namespace std;

  namespace Parag{
    void print(){
      cout<<"This is a function from Parag namespace"<<endl;
    }
  }

  namespace Jay{
    void print(){
      cout<<"This is a function from Jay namespace"<<endl;
    }
  }

  int main (){
    Parag::print();
    Jay::print();
    return 0;
  }
}
