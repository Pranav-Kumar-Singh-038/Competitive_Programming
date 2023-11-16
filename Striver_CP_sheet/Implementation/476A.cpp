#include <bits/stdc++.h>
using namespace std;

//TC: O(n/2) SC: O(1)
void solve()
{
    int n, m;
    cin >> n >> m;
    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }
    int r = n;
    int l;
    if (n % 2 == 0)
    {
        l = n / 2;
    }
    else
    {
        l = (n / 2) + 1;
    }
    for (int i = l; i <= r; i++)
    {
        if (i % m == 0)
        {
            cout << i;
            return;
        }
    }
    cout << -1;
    return;
}

int main()
{
    solve();
}