#include<iostream>
using namespace std;

class ATM{
    int pin;
    float balance;

public:
    string type;

    void set_details(int pin, float balance, string type){
        this->pin = pin;
        this->balance = balance;
        this->type = type;
    }

    bool pin_verification(int entered_pin){
        if(this->pin == entered_pin){
            return true;
        }
        else{
            return false;
        }
    }

    void show_balance(){
        cout << "Account Balance is: " << balance << endl;
    }

    void withdraw(float amount, int entered_pin){
        if(pin_verification(entered_pin)){
            balance = balance - amount;'
            show_balance();
        }
        else{
            cout << "Wrong Pin!!";
        }
    }

    void deposit(float amount){
        balance = balance + amount;
        show_balance();
    }

} a1;

int main(){
    a1.set_details(111, 1000, "Saving");
    a1.show_balance();
    bool b1 = a1.pin_verification(211);
}
