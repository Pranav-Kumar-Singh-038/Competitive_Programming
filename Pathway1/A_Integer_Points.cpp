#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    long long int oddp = 0;
    long long int evenp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        if (p[i] % 2 == 0)
        {
            evenp++;
        }
        else
        {
            oddp++;
        }
    }

    int m;
    cin >> m;
    long long int oddq = 0;
    long long int evenq = 0;
    vector<int> q(m);
    for (int i = 0; i < m; i++)
    {
        cin >> q[i];
        if (q[i] % 2 == 0)
        {
            evenq++;
        }
        else
        {
            oddq++;
        }
    }
    long long int even=evenp*evenq;
    long long int odd=oddp*oddq;
    long long int count = even + odd;
    cout << count << endl;
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