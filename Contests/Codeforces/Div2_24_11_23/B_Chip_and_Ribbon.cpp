#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    vector<long long int> vec(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    long long int sum = accumulate(vec.begin(), vec.end(), 0ll);
    long long int teleport = 0;
    long long int l = 0;
    long long int r = n - 1;
    while (sum > 0)
    {
        while (vec[l] == 0)
        {
            l++;
        }
        while (vec[r] == 0)
        {
            r--;
        }
        long long int i = l;
        while (i <= r)
        {
            bool condition = false;
            if (sum == 0)
            {
                break;
            }
            if (vec[i] > 0)
            {
                vec[i]--;
                sum--;
            }
            else if (vec[i] == 0)
            {
                teleport++;
                while (vec[i] == 0 && (i) <= r)
                {
                    i++;
                }
                if (i > r)
                {
                    break;
                }
                i--;
            }
            i++;
        }
        if (sum == 0)
        {
            break;
        }
        teleport++;
    }
    cout << teleport << endl;
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}