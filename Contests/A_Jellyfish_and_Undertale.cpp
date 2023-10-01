#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, vector<int> vec)
{
    sort(vec.begin(), vec.end());
    int totime = b;
    int sum = totime - 1;
    int i = 0;
    while (i < vec.size())
    {
        if (totime < a)
        {
            while (totime < a && i < vec.size())
            {
                int fin = totime + vec[i];
                if (fin > a || i == vec.size())
                {
                    break;
                }
                else
                {
                    totime += vec[i];
                    i++;
                }
            }
            sum += totime - 1;
            totime=1;
        }
        if (totime == 1)
        {
            while (totime < a && i < vec.size())
            {
                int fin = totime + vec[i];
                if (fin > a || i == vec.size())
                {
                    break;
                }
                else
                {
                    totime += vec[i];
                    i++;
                }
            }
            if (totime == 1 && i != vec.size())
            {
                totime = a;
                i++;
            }
            sum += totime - 1;
        }
        else
        {
            totime = 1;
        }
    }
    cout << sum+1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> vec;
        while (n--)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        solve(a, b, vec);
    }
}