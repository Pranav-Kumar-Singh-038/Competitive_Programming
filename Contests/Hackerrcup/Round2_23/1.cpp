#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int R, C;
    cin >> R >> C;
    vector<string> vec;

    for (int i = 0; i < R; i++)
    {
        string x;
        cin >> x;
        vec.push_back(x);
    }

    vector<vector<int>> nums(R + 2, vector<int>(C + 2, 2));
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (vec[i][j] == 'W')
            {
                nums[i + 1][j + 1] = 1;
            }
            else if (vec[i][j] == 'B')
            {
                nums[i + 1][j + 1] = 2;
            }
            else
            {
                nums[i + 1][j + 1] = -2;
            }
        }
    }

    // for (int i = 1; i < R + 1; i++)
    // {
    //     for (int j = 1; j < C + 1; j++)
    //     {
    //         cout << nums[i][j] << "_";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> vals(R + 2, vector<int>(C + 2, 2));
    for (int i = 1; i < R + 1; i++)
    {
        for (int j = 1; j < C + 1; j++)
        {
            int val = nums[i][j];
            val += nums[i - 1][j] + nums[i + 1][j] + nums[i][j - 1] + nums[i][j + 1];
            if (val < 0)
            {
                vals[i][j] = 0;
            }
            else
            {
                vals[i][j] = val;
            }
        }
    }

    for (int i = 1; i < R + 1; i++)
    {
        for (int j = 1; j < C + 1; j++)
        {
            cout << vals[i][j] << "_";
        }
        cout << endl;
    }
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