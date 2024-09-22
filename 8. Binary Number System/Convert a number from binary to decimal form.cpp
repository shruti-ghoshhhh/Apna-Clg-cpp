#include <iostream> 
#include <cmath> 
using namespace std; 

int main()
{
    int n, copy=n, s=0;
    cout<<"Enter a number in binary: ";
    cin>>n;
    while(n>0)
    {
        s+= pow(2,(n%10));
        n/=10;
    }
    cout<<"Number in Decimal form: "<<s;
}