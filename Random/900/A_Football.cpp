#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string x;
    cin >> x;
    char target = x[0];
    int count = 1;
    for (int i = 1; i < x.size(); i++)
    {
        if (x[i] == target)
        {
            count++;
        }
        else
        {
            count = 1;
            target = x[i];
        }
        if (count >= 7)
        {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
    return;
}

int main()
{
    solve();
}