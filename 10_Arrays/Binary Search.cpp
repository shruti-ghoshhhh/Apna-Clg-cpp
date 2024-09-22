//prerequisite: sorted array

#include <iostream>
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

    int mid, start, end;
    start=0;
    end=n-1;
    bool res=false;
    
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==key) {
        cout<<"Element found at position "<<mid+1;
        res=true;
        break; }

        else if(a[mid]<key)
        start=mid+1;

        else
        end=mid-1;

    }

    if(res!=true)
    cout<<"Element not found";


}