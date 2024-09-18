#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
    cout<<a<<endl;
    else
    cout<<b<<endl;

    if(a%2==0 && b%2==0)
    cout<<"a and b are even";
    else if(a%2==0 && b%2!=0)
    cout<<"a is even, b is odd";
    else
    cout<<"a is odd, b is even";
    return 0;
}