#include<iostream>
#include<limits.h>
#include<iomanip>

using namespace std;
main()
{
    cout<<"__________________________________________________________________________________________"<<endl;
    cout<<left<<setw(20)<<"DATA TYPE"<<right<<setw(3)<<"|"<<right<<setw(12)<<"BYTES"<<setw(5)<<"|"<<right<<setw(20)<<"MIN VALUE"<<setw(5)<<"|"<<setw(20)<<"MAX VALUE"<<setw(5)<<"|"<<endl;
    cout<<"----------------------|----------------|------------------------|------------------------|"<<endl;
    cout<<left<<setw(18)<<"char"<<right<<setw(5)<<"|"<<right<<setw(10)<<sizeof(char)<<setw(7)<<"|"<<right<<setw(20)<<CHAR_MIN<<setw(5)<<"|"<<setw(20)<<CHAR_MAX<<setw(5)<<"|"<<endl;
    cout<<"----------------------|----------------|------------------------|------------------------|"<<endl;
    cout<<left<<setw(18)<<"short int"<<right<<setw(5)<<"|"<<right<<setw(10)<<sizeof(short int)<<setw(7)<<"|"<<right<<setw(20)<<SHRT_MIN<<setw(5)<<"|"<<setw(20)<<SHRT_MAX<<setw(5)<<"|"<<endl;
    cout<<"----------------------|----------------|------------------------|------------------------|"<<endl;
    cout<<left<<setw(18)<<"unsigned short int"<<right<<setw(5)<<"|"<<right<<setw(10)<<sizeof(unsigned short int)<<setw(7)<<"|"<<right<<setw(20)<<0<<setw(5)<<"|"<<setw(20)<<USHRT_MAX<<setw(5)<<"|"<<endl;
    cout<<"----------------------|----------------|------------------------|------------------------|"<<endl;
    cout<<left<<setw(18)<<"int"<<right<<setw(5)<<"|"<<right<<setw(10)<<sizeof(int)<<setw(7)<<"|"<<right<<setw(20)<<INT_MIN<<setw(5)<<"|"<<setw(20)<<INT_MAX<<setw(5)<<"|"<<endl;
    cout<<"----------------------|----------------|------------------------|------------------------|"<<endl;
    cout<<left<<setw(18)<<"long int"<<right<<setw(5)<<"|"<<right<<setw(10)<<sizeof(long int)<<setw(7)<<"|"<<right<<setw(20)<<LONG_MIN<<setw(5)<<"|"<<setw(20)<<LONG_MAX<<setw(5)<<"|"<<endl;
    cout<<"----------------------|----------------|------------------------|------------------------|"<<endl;
    cout<<left<<setw(18)<<"unsigned int"<<right<<setw(5)<<"|"<<right<<setw(10)<<sizeof(unsigned int)<<setw(7)<<"|"<<right<<setw(20)<<0<<setw(5)<<"|"<<setw(20)<<UINT_MAX<<setw(5)<<"|"<<endl;
    cout<<"----------------------|----------------|------------------------|------------------------|"<<endl;
    cout<<left<<setw(18)<<"unsigned long int"<<right<<setw(5)<<"|"<<right<<setw(10)<<sizeof(unsigned long int)<<setw(7)<<"|"<<right<<setw(20)<<0<<setw(5)<<"|"<<setw(20)<<ULONG_MAX<<setw(5)<<"|"<<endl;
    cout<<"------------------------------------------------------------------------------------------"<<endl;

    cout<<"\n\nP R E P A R E D      B Y : \n\n\n"<<endl;

    int r,c;
    for (r=1;r<=5;r++)
    {
        for (c=1;c<=5;c++) //loop for A
        {
            if (c==1)
            {cout<<"   ";}

            switch(r)
            {
            case 1:
                if(c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 2:
                if(c==2 || c==4)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                cout<<"* ";
                break;
            case 4:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        for (c=1;c<=5;c++) //loop for B
        {
            switch(r)
            {
            case 1:
                cout<<"* ";
                break;
            case 2:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                if(c==5)
                {cout<<"  ";}
                else{cout<<"* ";}
                break;
            case 4:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                cout<<"* ";
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        for (c=1;c<=5;c++) //loop for H
        {
            switch(r)
            {
            case 1:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 2:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                cout<<"* ";
                break;
            case 4:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        for (c=1;c<=5;c++) //loop for I
        {
            switch(r)
            {
            case 1:
                cout<<"* ";
                break;
            case 2:
                if(c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                if(c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 4:
                if(c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                cout<<"* ";
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        for (c=1;c<=5;c++) //loop for N
        {
            switch(r)
            {
            case 1:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 2:
                if(c==1 || c==5 || c==2)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                if(c==1 || c==5 || c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;            case 4:
                if(c==1 || c==5 || c==4)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        for (c=1;c<=5;c++) //loop for E
        {
            switch(r)
            {
            case 1:
                cout<<"* ";
                break;
            case 2:
                if(c==1)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                if(c==5)
                {cout<<"  ";}
                else{cout<<"* ";}
                break;
            case 4:
                if(c==1)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                cout<<"* ";
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        for (c=1;c<=5;c++) //loop for E
        {
            switch(r)
            {
            case 1:
                cout<<"* ";
                break;
            case 2:
                if(c==1)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                if(c==5)
                {cout<<"  ";}
                else{cout<<"* ";}
                break;
            case 4:
                if(c==1)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                cout<<"* ";
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        for (c=1;c<=5;c++) //loop for T
        {
            switch(r)
            {
            case 1:
                cout<<"* ";
                break;
            case 2:
                if(c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                if(c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 4:
                if(c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                if (c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        cout<<endl;
    }
}
