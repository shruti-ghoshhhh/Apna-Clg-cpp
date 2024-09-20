#include<iostream>
using namespace std;

int sum(int a, int b)
{
    cout<<"Sum: ";
    return (a+b);
}

double sum(double a, double b)
{
    cout<<"Sum: ";
    return (a+b);
}

char sum(char a, char b)
{
    cout<<"Sum: ";
    return (a+b);
}
int main()
{
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<sum(a,b)<<endl;

    double a1,b1;
    cout<<"Enter 2 numbers: ";
    cin>>a1>>b1;
    cout<<sum(a1,b1)<<endl;

    char a2,b2;
    cout<<"Enter 2 characters: ";
    cin>>a2>>b2;
    cout<<sum(a2,b2)<<endl;
}