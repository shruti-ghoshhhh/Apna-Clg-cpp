/*Question 4: For a positive N, WAP that prints all the prime numbers from 2 to N. (Assume N >= 2)*/
//wap where a user can keep entering numbers until they're divisible with 10
#include <iostream> 
using namespace std; 

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int c=0;
    for(int j=2; j<=n;j++)
    {
        for(int i=1;i<=j;i++)
        {
            if(j%i==0)
            c++;
        }
        if(c==2)
            cout<<j<<endl;
            c=0;
    }

    
}