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
        for(int j=1; j<=5;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}