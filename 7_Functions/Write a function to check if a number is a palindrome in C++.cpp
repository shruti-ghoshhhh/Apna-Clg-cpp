#include <iostream> 
using namespace std; 

void Palindrome(int n)
{
    int rev=0, dgt,n1=n;
    while(n>0)
    {
        dgt=n%10;
        rev=rev*10+dgt;
        n/=10;
    }
    if(rev==n1)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    Palindrome(n);
    return 0;
}