#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n; j>=i;j--)
        {
            cout<<" ";
        }
        for(int j=i; j>=1;j--)
        {
            cout<<j;
        }
        if(i>1)
        {for(int j=2; j<=i;j++)
        {
            cout<<j;
        }}
        cout<<endl;
    }
}