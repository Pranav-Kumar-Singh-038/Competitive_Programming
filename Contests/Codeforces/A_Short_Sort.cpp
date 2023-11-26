#include <bits/stdc++.h>
using namespace std;

void solve(string x)
{
    if(x=="abc" ||x=="cba" ||x=="bac" ||x=="acb")
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    string x;
    cin>>x;
    solve(x);
 }
}