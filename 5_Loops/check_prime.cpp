//wap where a user can keep entering numbers until they're divisible with 10
#include <iostream> 
using namespace std; 

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
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