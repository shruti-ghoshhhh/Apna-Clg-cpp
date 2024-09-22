#include <iostream> 
#include <cmath> 
using namespace std; 

int main()
{
    int n, bn=0;
    cout<<"Enter a number in decimal form: ";
    cin>>n;
    int dgt;
    while(n>0)
    {
        dgt=n%2;
        bn=bn*10+dgt;
        n/=2;
    }
    cout<<"Number in Binary form: "<<bn;
}