#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n,s=0;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        s+=i;
    }
    cout<<s;
    return 0;
}