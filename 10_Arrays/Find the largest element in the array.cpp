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
    
    int max=a[0];
    for(int i=0;i<n;i++)
    { 
        if(a[i]>max)
        max=a[i];
    }

    cout<<"Largest element: "<<max;
}