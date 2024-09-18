//Write a C++ program that takes a year from the user and prints whether that year is a leap year or not.
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year: ";
    cin>>year;
    if(((year%4==0) && (year%100) !=0) || ((year%400)==0))
    cout<<"Leap year";
    else
    cout<<"Not a leap year";
    return 0;
}