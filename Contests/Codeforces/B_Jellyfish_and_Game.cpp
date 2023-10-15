#include <bits/stdc++.h>
using namespace std;

void solve(int k, vector<int> jelly, vector<int> gelly)
{
    int maxj = *max_element(jelly.begin(), jelly.end());
    int maxg = *max_element(gelly.begin(), gelly.end());
    int minj = *min_element(jelly.begin(), jelly.end());
    int ming = *min_element(gelly.begin(), gelly.end());
    int Min = min(ming, minj);
    int Max = max(maxg, maxj);
    sort(jelly.begin(), jelly.end());
    sort(gelly.begin(), gelly.end());

    if (k >= 1)
    {
        if (jelly[0] < gelly[gelly.size() - 1])
        {
            int temp = jelly[0];
            jelly[0] = gelly[gelly.size() - 1];
            gelly[gelly.size() - 1] = temp;
        }
        sort(jelly.begin(), jelly.end());
        sort(gelly.begin(), gelly.end());
        k--;
    }
    if (k % 2 != 0)
    {
        int temp = gelly[0];
        gelly[0] = jelly[jelly.size() - 1];
        jelly[jelly.size() - 1] = temp;
        sort(jelly.begin(), jelly.end());
        sort(gelly.begin(), gelly.end());
    }

    long long int ans = accumulate(jelly.begin(), jelly.end(), 0ll);
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> jelly;
        vector<int> gelly;
        while (n--)
        {
            int x;
            cin >> x;
            jelly.push_back(x);
        }
        while (m--)
        {
            int x;
            cin >> x;
            gelly.push_back(x);
        }
        solve(k, jelly, gelly);
    }
}
