#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;

    int a[n];
    cout<<"Enter elements: ";

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Array: ";

    for(int i=0;i<n;i++)

    { 
        cout<<a[i]<<" ";
    }
    
    int b[n];
    for(int i=0;i<n;i++)

    { 
        b[n-i]=a[i];
    }

    cout<<"Reversed array: ";

    for(int i=0;i<n;i++)

    { 
        cout<<b[i]<<" ";
    }

}