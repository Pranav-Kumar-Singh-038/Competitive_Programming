#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<endl;
    int val=max(a,b)-min(a,b);
    if(val%2==0)
    {
        cout<<val/2;
    }
    else
    {
        cout<<(val-1)/2;
    }
}