#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> people, vector<int> cost, int p)
{
    int n = cost.size();
    multimap<int, int> m;
    int total = 0;
    int term = 0;
    bool pos = false;

    for (int i = 0; i < n; i++)
    {
        if (cost[i] < p)
        {
            m.insert(make_pair(cost[i],people[i]));
            term = 1;
            total = p;
            pos = true;
        }
    }

//used multimap this time
// introduced temp variable
    if (pos && term != n)
    {
        for (const auto &it : m)
        {
            int temp=term;
            temp += it.second;
            if (temp == n)
            {
                total += it.first * it.second;
                term=n;
                break;
            }
            else if (temp > n)
            {
                total += it.first * (n - term);
                term = n;
                break;
            }
            else if(temp<n)
            {
                total += it.first * it.second;
                term=temp;
            }
        }
        if (term < n)
        {
            total += (n - term) * p;
            term = n;
        }
    }
    else
    {
        total = p * n;
    }
    if (n == 1)
    {
        cout << p << endl;
    }
    else
    {
        cout << total << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        int temp = n;
        vector<int> people;
        while (n--)
        {
            int x;
            cin >> x;
            people.push_back(x);
        }
        vector<int> cost;
        while (temp--)
        {
            int x;
            cin >> x;
            cost.push_back(x);
        }
        solve(people, cost, p);
    }
}