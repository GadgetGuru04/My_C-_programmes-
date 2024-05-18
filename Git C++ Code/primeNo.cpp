#include<iostream>
#include<iomanip>

using namespace std;

int prime(){

    int no;
    int ans = 0;
    cout<<"Enter a number : ";
    cin>>no;
    if(no <= 1){
        cout<<"Not a Prime Number"<<endl;
    }else{
        for(int i=2;i<(no/2);i++){
            if(no%i == 0){
                ans = 1;
                return 0;
                break;
            }
        }
        return 1;
    }
}
int main(){
    int no,res,ans;
        if(prime()){
                    cout<<"Number is Prime"<<endl;
                }else{
                    cout<<"Number is not prime"<<endl;
                }
            }
