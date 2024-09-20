#include <iostream> 
using namespace std; 

int factorial(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    cout<<"Factorial: ";
    return f;
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<factorial(n);
}