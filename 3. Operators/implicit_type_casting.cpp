#include <iostream> 
using namespace std; 
//implicit type conversion(automatic/type promotion)
//done by compiler to prevent data loss
//bool>char>int>float>double
int main()
{
    cout<<(10/3)<<endl;
    cout<<(10/3.0)<<endl;
    cout<<('A'+1)<<endl;
    return 0;
}