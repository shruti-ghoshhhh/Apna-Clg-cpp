#include<iostream>
using namespace std;

int Det(int a)
{
    cout<<"Sum: ";
    if (a%2==0)
    return 1;
    else 
    return 0;
}
int main()
{
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    if(Det(a)==1)
    cout<<"Even";
    else
    cout<<"Odd";
    }