#include <bits/stdc++.h>
using namespace std;

// Firt Approach: Brute Force
// TC: O(n*m)
// SC: O(n*m*x)
// memory limit exceeded
string concat(string x)
{
    x += x;
    return x;
}

size_t check(string x, string s)
{
    bool ans = false;
    size_t found = x.find(s);
    if (found != std::string::npos)
    {
        ans = true;
    }
    else
    {
        ans = false;
    }
    return found;
}

void solve(int n, int m, string x, string s)
{
    size_t chk;
    long long int count=0;
    while (true)
    {
        chk = check(x, s);
        if (chk == string::npos && count<(5))
        {
            x=concat(x);
            count++;
        }
        else
        {
            break;
        }
    }
        if (chk != string::npos) {
        cout << count<< endl;
    } else {
        cout << "-1" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        solve(n, m, x, s);
    }
}