#include <bits/stdc++.h>
using namespace std;

void solve(vector<long long int> people, vector<long long int> cost, long long int p)
{
    long long int n = cost.size();
    multimap<long long int, long long int> m;
    unsigned long long int total = 0;
    long long int term = 0;
    bool pos = false;

    for (long long int i = 0; i < n; i++)
    {
        if (cost[i] < p)
        {
            m.insert(make_pair(cost[i],people[i]));
            term = 1;
            total = p;
            pos = true;
        }
    }


    if (pos && term != n)
    {
        for (const auto &it : m)
        {
            long long int temp=term;
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
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, p;
        cin >> n >> p;
        long long int temp = n;
        vector<long long int> people;
        while (n--)
        {
            long long int x;
            cin >> x;
            people.push_back(x);
        }
        vector<long long int> cost;
        while (temp--)
        {
            long long int x;
            cin >> x;
            cost.push_back(x);
        }
        solve(people, cost, p);
    }
}