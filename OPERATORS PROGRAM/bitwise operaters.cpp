#include<iostream>
using namespace std;

int main()
{
    int a, b, result;

    cout<<"ENTER VALUE OF A: ";
    cin>>a;
    cout<<"ENTER VALUE OF B: ";
    cin>>b;

    result = a&b;
    cout<<"\nAND: "<<result;

    result = a|b;
    cout<<"\nOR: "<<result;

    result = a^b;
    cout<<"\nXOR: "<<result;

    result = ~a;
    cout<<"\nNOT: "<<result;

    result = a<<1;
    cout<<"\nLEFT SHIFT: "<<result;

    result = a>>1;
    cout<<"\nRIGHT SHIFT: "<<result;

    return 0;
}
