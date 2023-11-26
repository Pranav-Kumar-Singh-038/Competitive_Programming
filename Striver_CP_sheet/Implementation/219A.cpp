#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for (auto it : s)
    {
        m[it]++;
    }
    bool ans = true;
    for (auto pair : m)
    {
        if (pair.second % k != 0)
        {
            ans = false;
        }
    }
    if (ans)
    {
        for (auto &pair : m)
        {
            pair.second = pair.second / k;
        }
        for (int j = 0; j < k; j++)
        {

            for (auto pair : m)
            {
                for (int i = 0; i < pair.second; i++)
                {
                    cout << pair.first;
                }
            }
        }
    }
    else
    {
        cout << "-1" << endl;
    }
    // for (auto pair : m)
    // {
    //     std::cout << pair.first << " " << pair.second << std::endl;
    // }
}

int main()
{
    solve();
}