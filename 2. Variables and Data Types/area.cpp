/*
Question1:
In a program, input the side of a square. You have to output the area of the square.
Input:n(side)
Output:n*n(area)
*/

#include <iostream> 
using namespace std; 

int main()
{
    int s;
    cout<<"Enter side: ";
    cin>>s;
    cout<<"Area: "<<s*s;
}