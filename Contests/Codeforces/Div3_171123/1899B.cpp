#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    vector<long long int> weights(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }
    vector<long long int> diffs;
    if (n == 1)
    {
        cout << "0" << endl;
        return;
    }
    for (long long int i = 1; i < n; i++)
    {
        if (n % i != 0)
        {
            continue;
        }
        else
        {
            long long int k = 0;
            long long int max = INT_MIN;
            long long int min = INT_MAX;
            while (k + i <= n)
            {
                long long int sum = accumulate(weights.begin() + k, weights.begin() + k + i, 0ll);
                k = k + i;
                if (sum > max)
                {
                    max = sum;
                }
                if (sum < min)
                {
                    min = sum;
                }
            }
            long long int diff = max - min;
            diffs.push_back(diff);
        }
    }
    auto large = max_element(diffs.begin(), diffs.end());
    cout << *large << endl;
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