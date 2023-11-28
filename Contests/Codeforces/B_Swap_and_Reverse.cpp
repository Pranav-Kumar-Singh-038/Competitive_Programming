#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string x = s;
    sort(s.begin(), s.end());
    unordered_map<int, char> m;
    for (int i = 0; i < n; i++)
    {
        m[s[i]] = i;
    }

    if (k % 2 == 0)
    {
        cout << s << endl;
    }
    else
    {
       string a="";
       string b="";
       for(int i=0;i<n;i++)
       {
        if(i%2==0)
        {
            a+=x[i];
        }
        else
        {
            b+=x[i];
        }
       }
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
       string ans="";
       int l=0;
       int r=0;
       for(int i=0;i<n;i++)
       {
        if(i%2==0)
        {
            ans+=a[l];
            l++;
        }
        else
        {
            ans+=b[r];
            r++;
        }
       }
       cout<<ans<<endl;
    }
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