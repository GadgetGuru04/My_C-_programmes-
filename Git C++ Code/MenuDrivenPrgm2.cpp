#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Employee {
public:
    int empno;
    string ename;
    long esalary;
};

int main() {
    Employee emp[100];
    int ch, n=0, x , found =1;

    do {
        cout << "" << endl;
        cout << "" << endl;
        cout << "1. Add Record" << endl;
        cout << "2. Display All" << endl;
        cout << "3. Search by Employee Number" << endl;
        cout << "4. Search by Employee Name" << endl;
        cout << "0. Exit!" << endl;
        cout << "What do you want to choose?" << endl;
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "How many employees you want to add?" << endl;
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "Employee's Name:";
                    cin >> emp[i].ename;
                    cout << "Employee's Number:";
                    cin >> emp[i].empno;
                    cout << "Employee's Salary:";
                    cin >> emp[i].esalary;
                }
                break;
            case 2:
                    cout << "Displaying all!..." << endl;
                    cout << setw(15) << left << "Employee Number" << "  |   " << setw(15) << "Employee's name" << "  |  " << setw(15) << "Employee's Salary" << "  |  " << endl;
                    cout << "=================================================================" << endl;
                    for (int i = 0; i < n; i++) {
                    cout << setw(15) << left << emp[i].empno << "  |  " << setw(15) << emp[i].ename << "  |  " << setw(15) << emp[i].esalary << "  |  " << endl;
                }n+=x;
                break;

            case 3:
                found = 0;
                int empno;
                cout << "Enter the number to search : " <<endl;
                cin >> empno;
                    cout << setw(15) << left << "Employee Number" << "  |   " << setw(15) << "Employee's name" << "  |  " << setw(15) << "Employee's Salary" << "  |  " << endl;
                cout << "=================================================================" << endl;
                for (int i = 0; i < x; i++) {
                        if (emp[i].empno==empno){
                    cout << setw(15) << left << emp[i].empno << "  |  " << setw(15) << emp[i].ename << "  |  " << setw(15) << emp[i].esalary << "  |  " << endl;
                found = 1;
                    }
                }

                if(found){
                    cout << "Record Not Found!!" << endl;
                }

                break;

            case 4:{
                found = 0;
                string ename;
                cout << "Enter the name to search : " <<endl;
                cin >> ename;
                cout << setw(20) << left << "Employee Number" << "|" << setw(20) << "Employee's name" << "|" << setw(20) << "Employee's Salary" << "|" << endl;
                cout << "=================================================================" << endl;
                for (int i = 0; i < x; i++) {
                        if (ename.compare(emp[i].ename)){
                cout << left << setw(20) << emp[i].empno << "  |  " << setw(20) << emp[i].ename << "  |  " << setw(20) << emp[i].esalary << "  |  " << endl;
                    found = 1;
                    }
                }

                if (found){
                    cout << "Record Not Found!!" << endl;
                }
                }
                break;

            case 0:
                {


                cout<<"Thank you for using my prgm., Thank you see you soon!"<<endl;
                }
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }
    } while (ch != 0);

     // over written on  if added second time

    return 0;
}
