/* Question 1: Write a function to check if a number is a palindrome in C++.
(121 is a palindrome, 321 is not)

A number is called a palindrome if the number is equal to the reverse of a number.
Eg: 121 is a palindrome because the reverse of 121 is 121 itself. On the other hand,
321 is not a palindrome because the reverse

 of 321 is 123, which is not equal to 321.
 */
#include <iostream> 
using namespace std; 

void Palindrome(int n)
{
    int rev=0, dgt,n1=n;
    while(n>0)
    {
        dgt=n%10;
        rev=rev*10+dgt;
        n/=10;
    }
    if(rev==n1)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    Palindrome(n);
    return 0;
}