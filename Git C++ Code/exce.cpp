#include<iostream>

using namespace std;

int main(){
    int i,j;
    cout<<"Enter I and J:";
    cin>>i>>j;
    try{
        if(j==0){
            throw(j);
        }
        else{
            cout<<i/j;
        }

    }
    catch(int j){
        cout<<"Number cannot be:"<<j;
        cout<<"Enter I and J:";
        cin>>i>>j;
        cout<<i/j;
    }

}
