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
      for (space=1;space<=3;space++){
        cout<<" ";
      }
      for (col = 1; col <= 5; col++){//E
            if (row == 1 || row == 5 || col == 1||( row == 3 && col == 3)||( row == 3 && col == 2)){
                cout<<"* ";
            }else{
                cout << "  ";
            }
      }
       for (space=1;space<=3;space++){
        cout<<" ";
      }
      for (col = 1; col <= 5; col++){//B
            if (row == 1 || row == 3 || row == 5 || col == 1 || col == 5){
                cout<<"* ";
            }else{
                cout << "  ";
            }
      }
      cout<<endl;
  }
}
