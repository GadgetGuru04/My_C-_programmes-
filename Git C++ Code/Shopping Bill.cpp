#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  float p , q , r , s ;
  float a , b , c , d ;


  cout << "Enter Price of Computer : ";
  cin >> p;
  cout << "\nEnter Price of Computer : ";
  cin >> a;

  cout << "\nEnter Price of Mobile : ";
  cin >> q;
  cout << "\nEnter Price of Mobile : ";
  cin >> b;

  cout << "\nEnter Price of Calculator : ";
  cin >> r;
  cout << "\nEnter Price of Calculator : ";
  cin >> c;

  cout << "\nEnter Price of Pencil : ";
  cin >> s;
  cout << "\nEnter Price of Pencil : ";
  cin >> d;

  float sum = ( p * a ) + ( q * b ) + ( r * c ) + ( s * d );

  //system("cls");

  cout << fixed << setprecision(2);

  cout << endl;
  cout << endl;
  cout << endl;

  cout << setw(35) << "XYZ MART Pvt Ltd" << endl;
  cout << setw(40) << "3\\top, PQR Shopping Mall" << endl;
  cout << setw(32) << "GANDHINAGAR" << endl;
  cout << "==========================================================" << endl;

  cout << "Bill No. 101" << setw(10) << right << setw(35) << "Date:" << "03/03/2024" << endl;
  cout << "==========================================================" << endl;
  cout << left << setw(6) << "NO." << setw(20) << "ITEM NAME" << right << setw(8) << "UNIT PRICE" << setw(10) << "QUANTITY" << setw(10) << "TOTAL" << setw(10) << endl;
  cout << "==========================================================" << endl;

  cout << left << setw(6) << "1." << setw(20) << "Computer" << right << setw(9) << p << setw(8) << a << setw(15) << p * a << endl;

  cout << left << setw(6) << "2." << setw(20) << "Mobile" << right << setw(9) << q << setw(8) << b << setw(15) << q * b << endl;

  cout << left << setw(6) << "3." << setw(20) << "Calculator" << right << setw(9) << r << setw(8) << c << setw(15) << r * c << endl;

  cout << left << setw(6) << "4." << setw(20) << "Pencil" << right << setw(9) << s << setw(8) << d << setw(15) << s * d << endl;

  cout << "==========================================================" << endl;

  cout << setw(45) << "Total Amount = " << setw(10) << sum << endl;
  cout << setw(45) << "Discount = " << setw(10) << sum * 0.1 << endl;

  cout << "==========================================================" << endl;

  cout << setw(45) << "Total Amount to be paid = " << setw(10) << sum * 0.9 << endl;
  return 0;
}
