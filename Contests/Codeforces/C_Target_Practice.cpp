#include <bits/stdc++.h>
using namespace std;

void solve(vector<string> vec)
{
    int point = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            if ((i == 0 || i == 9 || j == 0 || j == 9) && vec[i][j] == 'X')
            {
                point += 1;
            }
            else if ((i == 1 || i == 8 || j == 1 || j == 8) && vec[i][j] == 'X')
            {
                point += 2;
            }
            else if ((i == 2 || i == 7 || j == 2 || j == 7) && vec[i][j] == 'X')
            {
                point += 3;
            }
            else if ((i == 3 || i == 6 || j == 3 || j == 6) && vec[i][j] == 'X')
            {
                point += 4;
            }
            else if ((i == 4 || i == 5 || j == 4 || j == 5) && vec[i][j] == 'X')
            {
                point += 5;
            }
        }
    }
cout << point << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> vec;
        int x = 10;
        while (x--)
        {
            string st;
            cin >> st;
            vec.push_back(st);
        }
        solve(vec);
    }
}