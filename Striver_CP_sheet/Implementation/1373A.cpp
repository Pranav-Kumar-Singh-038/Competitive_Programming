#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double cost1, numDonut2, costpack2;
    cin >> cost1 >> numDonut2 >> costpack2;
    double cost2 = costpack2 / numDonut2;
    int ans1, ans2;
    if (cost1 < cost2)
    {
        ans1 = 1000000000;
        ans2 = -1;
    }
    else if (cost1 == cost2)
    {
        ans2 = -1;
        ans1=numDonut2-1;
    }
    else
    {
        if (cost1 < costpack2)
        {
            ans2 = numDonut2;
            ans1=1;
        }
        else
        {
            ans1 = -1;
            ans2 = 1000000000;
        }
    }
    cout << ans1 << " " << ans2 << endl;
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