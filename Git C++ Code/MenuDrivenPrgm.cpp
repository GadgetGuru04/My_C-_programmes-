# include <iostream>
# include <string.h>
# include <iomanip>

using namespace std;

int main()
{
    class employee{
    int ch,n,empno;
    string ename;
    long esalary;
    }emp[100];

    do{
           cout<<"1. Add Record"<<endl;
           cout<<"2. Display All"<<endl;
           cout<<"3. Search by Enrollment Number"<<endl;
           cout<<"0. Exit!"<<endl;
           cout<<"What do you want to choose?"<<endl;
           cin>>ch;
           switch(ch){

           case 1 : {
               cout<<"How many employees you want to add?";
               cin>>n;
               for (int i=0; i<n; i++){
                cout<<"Employee's Name:";
                cin>>ename;
                cout<<"Employee's Number:";
                cin>>empno;
                cout<<"Employee's Salary:";
                cin>>esalary;
               }
           }

           case 2 : {
               int i;
                cout<<"Displaying all!"<<endl;
                cout<<setw(9)<<left<<emp[i].empno<<setw(9)<<emp[i].ename<<right<<setw(9)<<emp[i].esalary;
           }
           }

    }while(ch!=0);



}
