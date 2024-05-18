#include<iostream>
#include<iomanip>

using namespace std;

int x,y,z;
int a = 15;

void ari()
{
    int add,sub,mul,div;

    cout<<"Enter the first value :";
    cin>>x;

    cout<<"Enter the second value :";
    cin>>y;

    add=x+y;
    sub=x-y;
    mul=x*y;
    div=x/y;

    cout<<"Addition : "<<add<<endl<<"subtraction : "<<sub<<endl<<"Multiplication : "<<mul<<endl<<"Division : "<<div<<endl;

}

void rel()
{
    cout<<"Enter the first value :";
    cin>>x;

    cout<<"Enter the second value :";
    cin>>y;

    cout<<"X>Y :"<<(x>y)<<endl;
    cout<<"X<Y :"<<(x<y)<<endl;
    cout<<"X>=Y :"<<(x>=y)<<endl;
    cout<<"X<=Y :"<<(x<=y)<<endl;
    cout<<"X==Y :"<<(x==y)<<endl;
    cout<<"X!=Y :"<<(x!=y)<<endl;

}
void log()
{
    cout<<"Enter the first value :";
    cin>>x;

    cout<<"Enter the second value :";
    cin>>y;

    cout<<"Enter the third value :";
    cin>>z;

    cout<<"X>Y && X>Z :"<<(x>y&&x>z)<<endl;
    cout<<"X>Y || X>Z :"<<(x>y||x>z)<<endl;
    cout<<"!(X>Y) :"<<(!(x>y))<<endl;

}

void ass()
{
    int z;

    cout<<"Enter the first value :";
    cin>>x;

    cout<<"Enter the second value :";
    cin>>y;

    cout<<"z :"<<z<<endl;
    z=y;
    cout<<"z :"<<z<<endl;
    z+=y;
    cout<<"z :"<<z<<endl;
    z-=y;
    cout<<"z :"<<z<<endl;
    z*=y;
    cout<<"z :"<<z<<endl;
    z/=y;
    cout<<"z :"<<z<<endl;
    z%=y;
    cout<<"z :"<<z<<endl;

}
void inde()
{
    int z;
    cout<<"Enter the first value :";
    cin>>x;

    cout<<"Enter the second value :";
    cin>>y;

    z=++x;cout<<"z :"<<z<<endl;
    z=x++;cout<<"z :"<<z<<endl;
    z=--x;cout<<"z :"<<z<<endl;
    z=x--;cout<<"z :"<<z<<endl;

}
void bit()
{
    cout<<"Enter the first value :";
    cin>>x;

    cout<<"Enter the second value :";
    cin>>y;

    cout<<"X&Y :"<<(x&y)<<endl;
    cout<<"X|Y :"<<(x|y)<<endl;
    cout<<"X&Y :"<<(x&y)<<endl;
    cout<<"X<<2 :"<<(x<<2) <<endl;
    cout<<"Y<<2 :"<<(y<<2) <<endl;

}

void ter()
{
cout<<"Enter the first value :";
    cin>>x;

    cout<<"Enter the second value :";
    cin>>y;

    (x>y)?cout<<"X is maximum!":cout<<"Y is maximum!"<<endl;

}

void scope()
{
    cout<<"Enter the value : ";
    cin>>a;

    cout<<"Global value of a : "<<::a<<endl;
    cout<<"Local value of a : "<<a<<endl;

}

void inex()
{
    cout<<"For insertion (cout<<) is used "<<endl;
    cout<<"For extraction (cin>>) is used "<<endl;

}

int main()
{
    int ch;

    do{
    cout<<endl;
    cout<<endl;
    cout<<"1.Arithmetic operator"<<endl;
    cout<<"2.Relational operator"<<endl;
    cout<<"3.logical operator"<<endl;
    cout<<"4.Assignment"<<endl;
    cout<<"5.Increment Decrement operator"<<endl;
    cout<<"6.Bitwise operator"<<endl;
    cout<<"7.ternary operator"<<endl;
    cout<<"8.Scope resolution"<<endl;
    cout<<"9.Insertion and extraction"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"Enter the choice"<<endl;
    cin>>ch;
    switch(ch){
    case 1:
        {
            ari();
    break;
        }
    case 2:
        {
            rel();
    break;
        }
    case 3:
        {
            log();
    break;

        }
    case 4:
        {
            ass();
    break;
        }
    case 5:
        {
            inde();
    break;

        }
    case 6:
        {
            bit();
    break;

        }
    case 7:
        {
            ter();
    break;

        }
    case 8:
        {
            scope();
    break;

        }
    case 9:
        {
            inex();
    break;

        }
    case 0:
        cout<<"Thanks for using my Program!"<<endl;
    }
    }while(ch!=0);

}
