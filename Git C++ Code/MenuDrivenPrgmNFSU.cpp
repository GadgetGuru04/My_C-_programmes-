#include <iostream>
#include<iomanip>

using namespace std;

class Employee {
public:
    int empno;
    string ename;
    long esal;
}emp[100];

int n=0, x=0, found=0;

void addRecord(){
cout<< "Enter how many employees you want to add:";
cin >> n;
for (int i=x; i<n+x; i++){
    cout<<"Enter Employee Name : ";
    cin >> emp[i].ename;
    cout<<"Enter Employee No. : ";
    cin >> emp[i].empno;
    cout<<"Enter Employee Salary : ";
    cin >> emp[i].esal;

}
x+=n;
}

void displayRecord(){
cout<<"|"<<left<<setw(15)<<"Employee Name"<<"|"<<setw(15)<<"Employee No."<<"|"<<right<<setw(10)<<"Salary"<<"|"<<endl;
    for (int i=0; i<x; i++){
        cout<<left<<setw(15)<<emp[i].ename<<setw(15)<<emp[i].empno<<right<<setw(10)<<emp[i].esal<<endl;
}
}

void searchByNo(){
found = 0;
int empno;
cout<<"Enter the Employee No. to Search :";
cin>>empno;
cout<<"|"<<left<<setw(15)<<"Employee Name"<<"|"<<setw(15)<<"Employee No."<<"|"<<right<<setw(10)<<"Salary"<<"|"<<endl;
for (int i=0; i<x; i++){
if(emp[i].empno==empno){
cout<<left<<setw(15)<<emp[i].ename<<setw(15)<<emp[i].empno<<right<<setw(10)<<emp[i].esal<<endl;
found = 1;
}
}

if (!found){
cout<<"Record Not Found"<<endl;
}
}

void searchByName(){
found = 0;
string ename;
cout<<"Enter the Employee Name to Search :";
cin>>ename;
cout<<"|"<<left<<setw(15)<<"Employee Name"<<"|"<<setw(15)<<"Employee No."<<"|"<<right<<setw(10)<<"Salary"<<"|"<<endl;
for (int i=0; i<x; i++){
if(ename.compare(emp[i].ename)==0){
cout<<left<<setw(15)<<emp[i].ename<<setw(15)<<emp[i].empno<<right<<setw(10)<<emp[i].esal<<endl;
found = 1;
}
}

if (!found){
cout<<"Record Not Found"<<endl;
}
}

void searchBySalary(){
found = 0;
int esal;
cout<<"Enter the Employee Salary to Search :";
cin>>esal;
cout<<"|"<<left<<setw(15)<<"Employee Name"<<"|"<<setw(15)<<"Employee No."<<"|"<<right<<setw(10)<<"Salary"<<"|"<<endl;
for (int i=0; i<x; i++){
if(emp[i].esal==esal){
cout<<left<<setw(15)<<emp[i].ename<<setw(15)<<emp[i].empno<<right<<setw(10)<<emp[i].esal<<endl;
found = 1;
}
}
if (!found){
cout<<"Record Not Found"<<endl;
}
}

void updateByNo(){
int empno;
found = 0;
cout << "Employee no to Update: ";
cin >> empno;
for (int i=0;i<x;i++){
if (emp[i].empno == empno){
cout<<"Enter New Employee Name ";
cin>>emp[i].ename;
cout<<"Enter New Employee No. ";
cin>>emp[i].empno;
cout<<"Enter New Employee Salary ";
cin>>emp[i].esal;
found=1;
cout<<"Record Found Successfully!"<<endl;

}
}
if(!found){
cout<<"Record Not Found!"<<endl;
}

}

void deleteByNo(){
int empno;
found = 0;
int temp = 0;
cout << "Employee no to Delete: ";
cin >> empno;
for (int i=0;i<x;i++){
if (emp[i].empno == empno){

found = 1;
temp = 1;
}
emp[i]=emp[i + temp];
}
if(found)
{
cout<<"record Deleted Successfully!"<<endl;
}

else{
cout<<"Record Not Found!"<<endl;
}
}

void deleteByName(){
found = 0;
int temp = 0;
string ename;
cout << "Employee Name to Delete: ";
cin >> ename;
for (int i=0;i<x;i++){
if (ename.compare(emp[i].ename) == 0){

found=1;
temp=1;
}
emp[i]=emp[i + temp];
}
if(found)
{
cout<<"record Deleted Successfully!"<<endl;
}

else{
cout<<"Record Not Found!"<<endl;
}
}

void deleteBySalary(){
found = 0;
int temp = 0;
int esal;
cout << "Employee's Salary to Delete: ";
cin >> esal;
for (int i=0;i<x;i++){
if (emp[i].esal == esal){

found=1;
temp=1;
}
emp[i]=emp[i + temp];
}
if(found)
{
cout<<"record Deleted Successfully!"<<endl;
}

else{
cout<<"Record Not Found!"<<endl;
}

}

void highestSalary() {
long max = emp[0].esal;
int index = 0;

for (int i = 1; i < x; i++) {
if (emp[i].esal > max) {
max = emp[i].esal;
index = i;
}
}
cout << "Maximum Salary is of " << emp[index].ename << endl;
}

int main()
{
    int ch=0;
    do{
        cout<< "1. ADD RECORD "<<endl;
        cout << "2. Display RECORD "<<endl;
        cout << "3. Search by Employee No. "<<endl;
        cout << "4. Search by Employee Name "<<endl;
        cout << "5. Search by Employee's Salary "<<endl;
        cout << "6. Update by Employee No. "<<endl;
        cout << "7. Delete by Employee No. "<<endl;
        cout << "8. Delete by Employee Name "<<endl;
        cout << "9. Delete by Employee's Salary "<<endl;
        cout << "10. Find the Highest Paid Employee "<<endl;
        cout << "0. Exit! "<<endl;
        cout << "Please Enter your Choice: ";
        cin>>ch;

        switch(ch){

            case 1:
                addRecord();
            break;

            case 2:
                displayRecord();
            break;

            case 3:
                searchByNo();
            break;

            case 4:
                searchByName();
            break;

            case 5:
                searchBySalary();
            break;

            case 6:
                updateByNo();
            break;

            case 7:
                deleteByNo();
            break;

            case 8:
                deleteByName();
            break;

            case 9:
                deleteBySalary();
            break;

            case 10:
                highestSalary();
            break;

            case 0:
                {
                    cout <<"Thanks for using my Program!"<<endl;
            }
        }
    }while (ch!=0);
}
