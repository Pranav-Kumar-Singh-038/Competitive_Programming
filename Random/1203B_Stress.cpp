#include <bits/stdc++.h>
using namespace std;

string solvecorrect(int n, vector<int> a)
{
    sort(a.begin(), a.end());
    int area = a[0] * a.back();
    bool ok = true;
    for (int i = 0; i < n; ++i)
    {
        int lf = i * 2, rg = 4 * n - (i * 2) - 1;
        if (a[lf] != a[lf + 1] || a[rg] != a[rg - 1] || a[lf] * 1ll * a[rg] != area)
        {
            ok = false;
        }
    }
    if (ok)
        return "YES";
    else
        return "NO";
}

string solvewrong(int n, vector<int> vec)
{
    set<int> s;
    for (int i = 0; i < 4 * n; i++)
    {
        s.insert(vec[i]);
    }
    int count = 0;
    if (s.size() == 1)
    {
        return "YES";
    }
    else
    {
        sort(vec.begin(), vec.end());
        long long int product = vec[0] * vec[4 * n - 1];
        for (int i = 1; i < 2 * n; i++)
        {
            long long int prodtemp = vec[i] * vec[4 * n - 1 - i];
            if (prodtemp != product)
            {
                count++;
            }
        }
        if (count != 0)
        {
            return "NO";
        }
        else
        {
            return "YES";
        }
    }
}

int main()
{
    while (true)
    {
        int n = rand() % 100 + 1;
        cout << n << "\n";
        vector<int> a;

        for (int i = 0; i < 4*n; i++)
        {
            a.push_back(rand() % 10000+1);
        }
        for (int i = 0; i < 4*n; ++i)
        {
            cout << a[i] << ' ';
        }
        cout << "\n";

        string res1 = solvewrong(n,a);
        string res2 = solvecorrect(n,a);

        if (res1 != res2)
        {
            cout << "Wrong answer: " << res1 << " " << res2 << "\n";
            break;
        }

        else
        {
            cout << "OK\n";
        }
    }
}