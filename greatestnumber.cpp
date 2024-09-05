#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter the three number a , b , c";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
            cout<<" a is greatest number";
        else
            cout<<"c is greatest number";
    }
    else
    {
       if(b>c)
        cout<<"b is greatest number";
       else
        cout<<"c is greatest number";
    }
    return 0;
}