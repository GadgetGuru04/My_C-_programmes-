#include<iostream>
#include<math.h>

using namespace std;

int no;

int palindrome(){

    int rev=0,temp;
    cout<<"Enter a number: ";
    cin>>no;
    temp=no;
    while(temp>0){
        rev+=temp%10;
        temp=temp/10;
        if(temp>0)
            rev*=10;
    }
    if(rev == no)
        return 1;
    else
        return 0;
    }

int main(){
    int no,res,ans;
    {
                if(palindrome()){
                    cout<<"The given string is Palindrome"<<endl;
                }else{
                    cout<<"The given string is not a Palindrome"<<endl;
                }
            }
}

