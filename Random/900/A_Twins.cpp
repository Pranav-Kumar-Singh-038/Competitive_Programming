#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    sort(coins.begin(),coins.end());
    int small;
    if (n > 1)
    {
        small = accumulate(coins.begin(), coins.end() - 1, 0);
    }
    else
    {
        small = 0;
    }
    int large = coins[n - 1];
    int count = 1;
    while (large <= small)
    {
        count++;
        small = accumulate(coins.begin(), coins.end() - count, 0);
        large = accumulate(coins.end() - count, coins.end(), 0);
    }
    cout << count << endl;
}

int main()
{
    solve();
}