#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> boyskill(n);
    for (int i = 0; i < n; i++)
    {
        cin >> boyskill[i];
    }
    sort(boyskill.begin(), boyskill.end());
    int m;
    cin >> m;
    vector<int> girlskill(m);
    for (int i = 0; i < m; i++)
    {
        cin >> girlskill[i];
    }
    sort(girlskill.begin(), girlskill.end());
    int count = 0;
    int boy = 0;
    int girl = 0;
    while (girl != m && boy != n)
    {
        if (girlskill[girl] == boyskill[boy] || abs(girlskill[girl] - boyskill[boy]) == 1)
        {
            count++;
            boy++;
            girl++;
        }
        else
        {
            if (girlskill[girl] > boyskill[boy])
            {
                boy++;
            }
            else
            {
                girl++;
            }
        }
    }
    cout << count;
}

int main()
{
    solve();
}