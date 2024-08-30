#include <iostream> 
using namespace std; 

int main()
{
    int num=25;
    const int num2=35;git config user.email

    cout<<num<<endl<<num2<<endl<<"After changing: "<<endl;
    num=35;
    //not allowed: num2=45;
    cout<<num<<endl<<num2;
}