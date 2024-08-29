#include <iostream> 
using namespace std; 

int main()
{
    int a=5; //4 bytes
    char c='a'; //1 byte
    bool b= false; //1 byte
    float f= 6.5; //4 bytes
    double d=4.890; //8 bytes

    cout<<sizeof(int)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(bool)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
}