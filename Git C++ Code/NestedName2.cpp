#include<iostream>
#include<iomanip>
using namespace std;
int main(){

  int row, col, space=1;
  for (row = 1; row <= 5; row++){
      for (col = 1; col <= 5; col++){
            if (row==1||row==5||col==1||col==5){ //D
            cout << "* ";
            }else{
            cout << "  ";
            }
  }
      for (space = 1; space <= 3; space++){ //E
      cout << " ";
      }
      /*for (col = 1; col <= 5; col++){
            if (row==1||row==5||){
            cout << "* ";
            }else{
            cout << "  ";
      }
      }
      for (space = 1; space <= 3; space++){ //A
      cout << " ";
      }*/
      for (col = 1; col <= 5; col++){
        cout << "* ";
        if (row==1||row==3||col==1||col==5){
            cout << "* ";
      }else{
            cout << "  ";
      }
      }
      for (space = 1; space <= 3; space++){ //L
      cout << " ";
      }
      for (col = 1; col <= 5; col++){
        cout << "* ";
      }
      for (space = 1; space <= 3; space++){ //D
      cout << " ";
      }
      for (col = 1; col <= 5; col++){
        cout << "* ";
      }
      for (space = 1; space <= 3; space++){ //A
      cout << " ";
      }
      for (col = 1; col <= 5; col++){
        cout << "* ";
      }
      for (space = 1; space <= 3; space++){ //R
      cout << " ";
      }
        cout << endl;
      }

  }

