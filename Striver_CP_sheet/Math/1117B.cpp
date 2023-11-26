#include <bits/stdc++.h>
using namespace std;

//TC: O(1) SC: O(1)
// Not counting the linear time and space while taking the input array
void solve()
{
    long long int n, m, k;
    cin >> n >> m >> k;
    vector<long long int> happy(n);
    long long int max = INT_MIN;
    long long int max2 = INT_MIN;
    for (long long int i = 0; i < n; i++)
    {
        cin >> happy[i];
        if (happy[i] > max)
        {
            max2 = max;
            max =  happy[i];
        }
        else if (happy[i] >= max2)
        {
            max2 = happy[i];
        }
    }
    long long int count1 = 0;
    long long int count2 = 0;
    long long int ans = 0;
    if (k >= m)
    {
        cout << max * m;
    }
    else
    {
        long long int val = max * k + max2;
        count1 += m / (k + 1);
        count2 = m - (count1*(k+1));
        ans = val * count1;
        ans += count2 * max;
        cout << ans;
    }
}

int main()
{
    solve();
}
