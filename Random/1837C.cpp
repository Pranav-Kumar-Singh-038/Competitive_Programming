#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string x;
    cin>>x;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='?')
        {
          x[i]='1';
        }
    }
    cout<<x<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}