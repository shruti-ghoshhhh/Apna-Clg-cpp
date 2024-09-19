#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age: ";
    cin>>age;
    bool isAdult=(age>=18)?"Adult":"Not an adult";
    cout<<isAdult;
    return 0;
}