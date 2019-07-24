#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout<<"ENTER VALUE OF A: ";
    cin>>a;
    cout<<"ENTER VALUE OF B: ";
    cin>>b;

    if (a==b)
    {
        cout<<"\nNUMBERS ARE EQUAL";
    }

    if (a!=b)
    {
        cout<<"\nNUMBERS ARE NOT EQUAL";
    }

    if (a>b)
    {
        cout<<"\nA IS GREATER";
    }

    if (a<b)
    {
        cout<<"\nA IS SMALLER";
    }

    if (a>=b)
    {
        cout<<"\nA IS GREATER THAN OR EQUAL";
    }

    if (a<=b)
    {
        cout<<"\nA IS SMALLER THAN OR EQUAL";
    }

    return 0;
}
