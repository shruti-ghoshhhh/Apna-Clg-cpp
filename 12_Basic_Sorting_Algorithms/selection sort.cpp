//O(n^2)
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
    cout<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
                if(a[i]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }

    for(int i=0;i<n;i++)

    { 
        cout<<a[i]<<" ";
    }
    
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
            swap(a[i],a[min]);
        }
}
