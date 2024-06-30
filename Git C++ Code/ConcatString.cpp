#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str1[24]="National ";
    char *str2 = "Forensic Sciences University";

    strncat(str1,str2,1);

    cout<<str1<<endl;

}
