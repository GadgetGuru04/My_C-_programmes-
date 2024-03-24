#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int a, b, c, d, e, f;
  float p, q, r, s, t, u;

  cout<<"Enter Theory Marks of ENGLISH COMM. : ";
  cin>>p;
  cout<<"\nEnter Practical Marks of ENGLISH COMM. : ";
  cin>>a;

  cout<<"\nEnter Theory Marks of HINDI COURSE - A : ";
  cin>>q;
  cout<<"\nEnter Practical Marks of HINDI COURSE - A : ";
  cin>>b;

  cout<<"\nEnter Theory Marks of MATHEMATICS : ";
  cin>>r;
  cout<<"\nEnter Practical Marks of MATHEMATICS : ";
  cin>>c;

  cout<<"\nEnter Theory Marks of SCIENCE : ";
  cin>>s;
  cout<<"\nEnter Practical Marks of SCIENCE : ";
  cin>>d;

  cout<<"\nEnter Theory Marks of SOCIAL SCIENCE : ";
  cin>>t;
  cout<<"\nEnter Practical Marks of SOCIAL SCIENCE : ";
  cin>>e;

  cout<<"\nEnter Theory Marks of FOUNDATION OF IT : ";
  cin>>u;
  cout<<"\nEnter Practical Marks of FOUNDATION OF IT : ";
  cin>>f;

  cout<<fixed<<setprecision(2);

  cout<<endl;
  cout<<endl;
  cout<<endl;

  cout << setw(5) << "CENTRAL BOARD OF SECONDARY EDUCATION" << endl;
  cout << setw(40) << "MARKS STATEMENT" << endl;
  cout << setw(3) << "ALL INDIA SECONDARY SCHOOL EXAMINATION, 2018" << endl;

  cout<<"DATE OF BIRTH : 22/04/2002"<<setw(10)<<"22ND APRIL TWO THOUSAND TWO"<<endl;
  cout<<"SCHOOL : 54149-INDRAPURAM PUB SCHOOL INDIRAPURAM GHAZIBAD UP"<<endl;
  cout<<"=========================================================="<<endl;
  cout<<left<<setw(6)<<"SUB CODE"<<setw(20)<<"SUBJECT"<<right<<setw(8)<<"THEORY"<<setw(10)<<"PRACTICAL"<<setw(10)<<"TOTAL"<<setw(10)<<endl;

    cout<<"=========================================================="<<endl;

  cout<<left<<setw(6)<<"101"<<setw(20)<<"ENGLISH COMM."<<right<<setw(9)<<p<<setw(8)<<a<<setw(15)<<p+a<<endl;

  cout<<left<<setw(6)<<"002"<<setw(20)<<"HINDI COURSE - A"<<right<<setw(9)<<q<<setw(8)<<b<<setw(15)<<q+b<<endl;

  cout<<left<<setw(6)<<"041"<<setw(20)<<"MATHEMATICS"<<right <<setw(9)<<r<<setw(8)<<c<<setw(15)<<r+c<<endl;

  cout<<left<<setw(6)<<"086"<<setw(20)<<"SCIENCE"<<right<<setw(9)<<s<<setw(8)<<d<<setw(15)<<s+d<<endl;

  cout<<left<<setw(6)<<"087"<<setw(20)<<"SOCIAL SCIENCE"<<right<<setw(9)<<t<<setw(8)<<e<<setw(15)<<t+e<<endl;

  cout<<left<<setw(6)<<"165"<<setw(20)<<"FOUNDATION OF IT"<<right<<setw(9)<<u<<setw(8)<<f<<setw(15)<<u+f<<endl;

  cout<<"=========================================================="<<endl;

  return 0;
}
