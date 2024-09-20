#include<iostream>
using namespace std; 

double bc(int n, int r)
{
    int nf=1,rf=1,subf=1;
    for(int i=1;i<=n;i++)
    {
        nf*=i;
    }
    
    for(int i=1;i<=r;i++)
    {
        rf*=i;
    }

    for(int i=1;i<=n-r;i++)
    {
        subf*=i;
    }

    return ((nf*1.0)/(rf*subf));
}

int main()
{
    int n, r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    cout<<bc(n,r);
}