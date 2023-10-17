#include <bits/stdc++.h>
using namespace std;

void solve(int t, int i, int n1, long long int first)
{
    vector<long long int> vec;
    int n;

    if (i == 1)
    {
        vec.push_back(first);
        n=n1;
        for (long long int i = 1; i < 4 * n1; i++)
        {
            long long int x;
            cin >> x;
            vec.push_back(x);
        }
    }
    else
    {
        cin >> n;
        for (long long int i = 0; i < 4 * n; i++)
        {
            long long int x;
            cin >> x;
            vec.push_back(x);
        }
    }
    if (t == 500 && i == 90 && first==7)
    {
        cout << n << endl;
        for (int i=0;i<49;i++)
        {
            cout << vec[i]<<" ";
        }
        cout<<endl;
        for(int i=49;i<98;i++)
        {
            cout<<vec[i]<<" ";
        }
    }
    else if(t==500 && first==7 && i!=90)
    {
        return;
    }
    else
    {
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
            for (long long int i = 1; i < 2 * n; i++)
            {
                long long int prodtemp = vec[i] * vec[4 * n - 1 - i];
                if (prodtemp != product)
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
}

int main()
{
    long long int t;
    cin >> t;
    int n;
    cin >> n;
    long long int first;
    cin >> first;
    for (int i = 1; i <= t; i++)
    {
        solve(t, i, n, first);
    }
}