#include<iostream>
using namespace std;

int Sum(int a, int b)
{
    cout<<"Sum: ";
    return (a+b);
}
int main()
{
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<Sum(a,b);
}