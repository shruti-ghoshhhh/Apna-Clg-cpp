#include<iostream>
using namespace std;

int Product(int a, int b)
{
    cout<<"Product: ";
    return (a*b);
}
int main()
{
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<Product(a,b);
}