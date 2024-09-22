#include <iostream> 
using namespace std; 

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Multiplication table upto 10: "<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}