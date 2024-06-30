#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main( ) {

char firstName[] = "ABCD";
char *lastName = "WXYZ";

cout<<"First Name: "<<firstName<<endl;
cout<<"Last Name: "<<lastName<<endl;
int i=0;
cout<<"FirstName: ";
while (firstName[i] != '\0')
cout<<firstName[i++];

i=0;
cout<<"\nLast Name: ";
while (lastName[i] != '\0')

cout<<lastName[i++];

return 0;
}


