#include <iostream> 
using namespace std; 

int main()
{
    int n,s=0;
    cout<<"Enter range: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s+=i;
    }
    cout<<"Sum: "<<s;
    return 0;
}