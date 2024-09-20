#include <iostream> 
using namespace std; 

int sum(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    cout<<"Sum: "<<s;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    sum(n);
    return 0;
}