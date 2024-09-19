#include <iostream> 
using namespace std; 

int main()
{
    int n, s=0, dgt;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0)
    {
        dgt=n%10;
        if(dgt%2!=0)
        s+=dgt;
        n/=10;
    }
    cout<<"Sum of odd digits: "<<s;
    return 0;
}