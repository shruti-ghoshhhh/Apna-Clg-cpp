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

    cout<<"Search for key: ";
    int key;
    cin>>key;
    int c=0;

    for(int i=0;i<n;i++)

    { 
        if(a[i]==key) {
        cout<<"Key found at position: "<<i+1;
        c++; }
    }

    if(c==0)
    cout<<"Element not found.";
    
}