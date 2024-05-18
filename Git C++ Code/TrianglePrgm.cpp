#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

int main()
{

char *str = "DEBDWAIPAYAN";
int n = strlen(str);
int i;

for(i=0;i<n;i++){
    cout<<left<<setw(n+1)<<str+i<<setw(1)<<str[i]<<right<<setw(n+1)<<str+i<<endl;
}

for(i=n-2;i>=0;i--){
    cout<<left<<setw(n+1)<<str+i<<setw(1)<<str[i]<<right<<setw(n+1)<<str+i<<endl;
}
for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << str[j];
        }

        for (int j = i - 1; j >= 0; j--) {
            cout << str[j];
        }

        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << str[j];
        }

        for (int j = i - 1; j >= 0; j--) {
            cout << str[j];
        }

        cout << endl;
    }
}
