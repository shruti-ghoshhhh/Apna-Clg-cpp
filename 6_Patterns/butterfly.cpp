#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter alignment: ";
    cin>>n;
    int c=1;
    for(int i=1;i<=n;i++)
    {
            if(i==n)
            {
                for(int j=1; j<=2*n;j++)
            {
                cout<<"*";
            }
            }
            else{
                    for(int j=1; j<=i;j++)
            {
                cout<<"*";
            }
            for(int j=i; j<=2*n-i-1;j++)
            {
                cout<<" ";
            }
            for(int j=2*n-i; j<2*n;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }


            }
            cout<<endl;
    for(int i=n;i>=1;i--)
    {
         if(i==n)
            {
                for(int j=1; j<=2*n;j++)
            {
                cout<<"*";
            }
            }
            else
            {
            for(int j=1; j<=i;j++)
            {
                cout<<"*";
            }
            for(int j=i; j<=2*n-i-1;j++)
            {
                cout<<" ";
            }
            for(int j=2*n-i; j<2*n;j++)
            {
                cout<<"*";
                } }
            cout<<endl;
        }
    }
