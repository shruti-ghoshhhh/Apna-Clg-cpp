//wap where a user can keep entering numbers until they're divisible with 10
#include <iostream> 
using namespace std; 

int main()
{
    int i=1;
    while(i>0)
    {
        int n;
        cin>>n;
        i++;
        if(n%10==0)
        break;
    }
}