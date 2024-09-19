#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"Enter operator: ";
    cin>>c;
    switch(c)
    {
        case '+': 
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        default: 
            cout<<"Invalid input";
            break;
    }
    return 0;
}