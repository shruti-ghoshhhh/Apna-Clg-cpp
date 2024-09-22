/*
Question 5: For any 3-digit number, check whether it’s an Armstrong number or not. 
An Armstrong number is a number that is equal to the sum of cubes of its digits. 
Eg: 371 is an Armstrong number. 333 + 777 + 111 = 371
*/

//doing it for all kinds of numbers =, not 3 digit

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    int c=0, cp=n, cpp=n;
    while(n>0)
    {
        n/=10;
        c++;
    }

    int sum=0,dgt;
    while(cp>0)
    {
        dgt=cp%10;
        sum+=pow(dgt,c);
        cp/=10;
    }
    if(sum==cpp)
    cout<<"Armstrong number";
    else
    cout<<"Not an armstrong number";
    return 0;
}