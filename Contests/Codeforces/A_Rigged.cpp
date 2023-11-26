#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> sv, vector<int> ev)
{
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> sv;
        vector<int> ev;
        while(n--)
        {
            int s;
            int e;
            cin>>s;
            cin>>e;
            sv.push_back(s);
            ev.push_back(e);
        }
        solve(sv,ev);
    }
}