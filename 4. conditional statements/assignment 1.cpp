// Question 1: Write a C++ program to get a number from the user and print whether it's positive, negative or zero.
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    if(a>0)
    cout<<"positive number";
    else if(a<0)
    cout<<"negative number";
    else
    cout<<"number is zero";
    return 0;
}