#include<iostream>
using namespace std;
int main()
{
int number;
double fact=1;
cin>>number;
for(int i=1;i<=number;i++)
fact=fact*i;

cout<<fact;
return 0;
}
