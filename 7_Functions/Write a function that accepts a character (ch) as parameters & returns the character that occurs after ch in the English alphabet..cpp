/*Write a function that accepts a character (ch) as parameters & returns
the character that occurs after ch in the English alphabet.

Eg: input = 'c', return value = 'd'

Note: for ch = 'z', return 'a'.*/

#include<iostream>
using namespace std;

char Det(char c)
{
    if(c!='z')
    return c+1;
    else
    return 'a';
}

int main()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    cout<<"Next Character: "<<Det(c);
}