#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int x;
    cin >> x;
    string cp = to_string(x);
    int size = cp.size();
    string ans="";
    for (int i = 0; i < size; i++)
    {
        int val = cp[i]-'0';
        string c;
        if (val < 5)
        {
            c=to_string(val);
            ans+=c;
        }
        else if(i==0 && val==9)
        {
            c=to_string(val);
            ans+=c;
        }
        else
        {
          val=9-val;
          c=to_string(val);
          ans+=c;
        }
    }
    cout<<ans<<endl;
}
// 18
int main()
{
    solve();
}