#include<iostream>
using namespace std; 

void prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }

    if(c>2)
    cout<<"not prime";
    else
    cout<<"prime";
}
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    prime(a);
}