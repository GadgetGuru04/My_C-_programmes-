#include<iostream>
#include<math.h>

using namespace std;

int no;
int even(){

    cout<<"Enter a number : ";
    cin>>no;
    if(no%2 == 0){
        return 1;
    }else
        return 0;
    }

int pNZ(){

    cout<<"Enter a number : ";
    cin>>no;
    if(no > 0){
        return 1;
    }else if(no<0){
        return -1;
    }else{
        return 0;
}
}
int prime(){

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

int armstrong(){

    int len=0,temp,sum=0;
    cout<<"Enter your number: ";
    cin>>no;
    temp=no;
    while(temp!=0){
        sum+=(pow((temp%10),3));
        temp/=10;
    }
    if(sum == no)
        return 1;
    else
        return 0;
    }

int main(){
    int no,res,ans,ch;
    do{
        cout<<endl;
        cout<<endl;
        cout<<"1. Check Odd/Even"<<endl;
        cout<<"2. Check Positive,Negative & Zero"<<endl;
        cout<<"3. Check Prime"<<endl;
        cout<<"4. Check Palindrome"<<endl;
        cout<<"5. Check Armstrong"<<endl;
        cout<<"0. Exit!"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        //system("cls");

        switch(ch){

        case 1:
            {
                if(even()){
                cout<<"Number is Even!"<<endl;
                }else{
                cout<<"Number is Odd!"<<endl;
                }
            }
                break;

        case 2:
            {
                int r = pNZ();
                if(r == 1){
                    cout<<"Number is Positive!"<<endl;
                }else if(r==-1){
                    cout<<"Number is Negative!"<<endl;
                }else{
                    cout<<"Number is Zero!"<<endl;
                }
            }
                break;

        case 3:
            {
                if(prime()){
                    cout<<"Number is Prime"<<endl;
                }else{
                    cout<<"Number is not prime"<<endl;
                }
            }
            break;

        case 4:
            {
                if(palindrome()){
                    cout<<"The given string is Palindrome"<<endl;
                }else{
                    cout<<"The given string is not a Palindrome"<<endl;
                }
            }
            break;

        case 5:
            {
                if(armstrong())
                    cout<<"It is Armstrong"<<endl;
                else
                    cout<<"It is not Armstrong"<<endl;
            }
            break;

        case 0:
            cout<<"Thanks for using my Program!"<<endl;
        }

        }while(ch!=0);

    }
