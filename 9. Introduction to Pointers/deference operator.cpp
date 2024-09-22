#include <iostream>
using namespace std;

int main()
{
    int a=10;
    cout<<&a<<endl; //address
    cout<<*(&a)<<endl; //value
    int *ptr=&a;
    cout<<*ptr<<endl;
}