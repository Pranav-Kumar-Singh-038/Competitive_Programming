#include <bits/stdc++.h>
using namespace std;

//The key here was to also check if the input is correct that is, after sorting the elements will be equal in pairs of two.
//and the basic test of check the product of first and last numbers must be done.



// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(4 * n);
//     for (int j = 0; j < 4 * n; ++j)
//     {
//         cin >> a[j];
//     }
//     sort(a.begin(), a.end());
//     int area = a[0] * a.back();
//     bool ok = true;
//     for (int i = 0; i < n; ++i)
//     {
//         int lf = i * 2, rg = 4 * n - (i * 2) - 1;
//         if (a[lf] != a[lf + 1] || a[rg] != a[rg - 1] || a[lf] * 1ll * a[rg] != area)
//         {
//             ok = false;
//         }
//     }
//     if (ok)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
// }

void solve()
{
    long long int n;
    cin >> n;
    vector<long long int> vec;
    for (long long int i = 0; i < 4 * n; i++)
    {
        long long int x;
        cin >> x;
        vec.push_back(x);
    }
    set<long long int> s;
    for (long long int i = 0; i < 4 * n; i++)
    {
        s.insert(vec[i]);
    }
    long long int count = 0;
    if (s.size() == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        sort(vec.begin(), vec.end());
        long long int product = vec[0] * vec[4 * n - 1];
        for (long long int i = 1; i <=  n; i++)
        {
            long long int prodtemp = vec[2*i-2] * vec[4 * n + 1 - 2*i];
            if (prodtemp != product || vec[2*i-2]!=vec[2*i-1] || vec[4*n+1-2*i]!=vec[4*n-2*i])
            {
                count++;
            }
        }
        if (count != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
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
