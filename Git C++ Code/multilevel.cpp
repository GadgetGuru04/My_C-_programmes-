#include<iostream>

using namespace std;

class person{
    public:
    string name;
    int age;
    void setname(string name){
        this->name=name;
    }
    void setage(int age){
        this->age=age;
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    void displaypersoninfo(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
    }
};
class employee:public person{
    public:
    string emp_pos;
    int emp_id;
    void setemp_pos(string emp_pos){
        this->emp_pos=emp_pos;
    }
    void setemp_id(int emp_id){
        this->emp_id=emp_id;
    }
    string getemp_pos(){
        return emp_pos;
    }
    int getemp_id(){
        return emp_id;
    }
    void displayemployeeinfo(){
        displaypersoninfo();
        cout<<"Employee ID :"<<emp_id<<endl;
        cout<<"Employee Position :"<<emp_pos<<endl;
    }
};
class manager:public employee{
    public:
    int team_size;

    void setteam_size(int team_size){
        this->team_size=team_size;
    }

    int getteam_size(){
        return team_size;
    }
    void displaymanagerinfo(){

        displaypersoninfo();
        displayemployeeinfo();
        cout<<"Team Size:"<<team_size<<endl;

    }
};
int main(){
    manager m;
    m.setname("XYZ");
    m.setage(20);
    m.setemp_id(1);
    m.setemp_pos("Manager");
    m.setteam_size(100);
    m.displaymanagerinfo();
}
