/*
Write a function which takes 2 numbers as parameters (a & b) and
outputs: a^2 + b^2 + 2*ab
*/

#include<iostream>
#include<cmath>
using namespace std;

int Sum(int a, int b)
{
    return (pow(a,2)+pow(b,2)+2*a*b);
}
int main()
{
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<Sum(a,b);
}