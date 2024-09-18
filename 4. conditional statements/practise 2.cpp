#include<iostream>
using namespace std;
int main()
{
    int income;
    cout<<"Enter income per annum in lakhs: ";
    cin>>income;
    double tax;
    if(income<5)
    tax=0;
    else if(income>5 && income<10)
    tax=10.0/100*income;
    else
    tax=30.0/100*income;

    cout<<tax<<"lakhs";
    return 0;
}