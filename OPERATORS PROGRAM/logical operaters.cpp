#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout<<"ENTER VALUE OF A: ";
    cin>>a;
    cout<<"ENTER VALUE OF B: ";
    cin>>b;

    if (a<10 && a>3)
    {
        cout<<"\nA IS GREATER THAN 3 AND LESS THAN 10";
    }

    if (b<10 || b>3)
    {
        cout<<"\nB IS GREATER THAN 3 OR LESS THAN 10";
    }

    if (!(a<10))
    {
        cout<<"\nA IS NOT LESS THAN 10";
    }

    return 0;
}
