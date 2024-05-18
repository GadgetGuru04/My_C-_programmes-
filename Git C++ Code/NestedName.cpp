#include<iostream>
#include<iomanip>
using namespace std;
int main(){

  int row, col, space=1;
  for (row = 1; row <= 5; row++){
    for (col = 1; col <= 5; col++){
      if(row==1 || row==5 || col==1 || col==5){
      cout << "* ";
      }
    }
    for (space = 1; space <= 3; space++){ //D
    cout << " ";
    }
    for (col = 1; col <= 5; col++){
      cout << "* ";
    }
    for (space = 1; space <= 3; space++){ //E
    cout << " ";
    }
    /*for (col = 1; col <= 5; col++){
      cout << "* ";
    }
    for (space = 1; space <= 3; space++){ //B
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
    for (space = 1; space <= 3; space++){ //W
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
    for (space = 1; space <= 3; space++){ //I
    cout << " ";
    }
    for (col = 1; col <= 5; col++){
      cout << "* ";
    }
    for (space = 1; space <= 3; space++){ //P
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
    for (space = 1; space <= 3; space++){ //Y
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
    for (space = 1; space <= 3; space++){ //N
    cout << " ";
    }
    for (col = 1; col <= 5; col++){
      cout << "* ";
    }
    cout << endl;
  }*/
}
}
