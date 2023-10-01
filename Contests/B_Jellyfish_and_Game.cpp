#include <bits/stdc++.h>
using namespace std;

void solve(int k, vector<int> jelly, vector<int> gelly)
{
    int maxj = *max_element(jelly.begin(), jelly.end());
    int maxg = *max_element(gelly.begin(), gelly.end());
    int minj = *min_element(jelly.begin(), jelly.end());
    int ming = *min_element(gelly.begin(), gelly.end());
    if (k % 2 == 0)
    {
        int sum = accumulate(jelly.begin(), jelly.end(), 0ll);
        if (minj > maxg)
        {
            cout<<sum-maxj+ming<<endl;
        }
        else if((ming>maxj) || ( maxj==maxg && minj==ming)||(maxj<maxg && minj<ming) || (minj==ming && maxj<maxg) || (maxj==maxg && minj<ming) || (maxj==maxg && minj>ming)){
            cout<<sum<<endl;
        }
        else if((minj<ming && maxj>maxg) || (minj==ming && maxj>maxg))
        {
            cout<<sum-maxj+maxg<<endl;
        }
        else if(minj>ming && maxj<maxg)
        {
            cout<<sum-minj+ming<<endl;
        }
        else if(maxj>maxg && minj>ming)
        {
            cout<<sum-minj+maxg-maxj+ming<<endl;
        }
    }
    else
    {
        int sum = accumulate(jelly.begin(), jelly.end(), 0);
        if (minj > maxg)
        {
            cout << sum << endl;
        }
        else
        {
            cout<<sum-minj+maxg<<endl;
        }     
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> jelly;
        vector<int> gelly;
        while (n--)
        {
            int x;
            cin >> x;
            jelly.push_back(x);
        }
        while (m--)
        {
            int x;
            cin >> x;
            gelly.push_back(x);
        }
        solve(k, jelly, gelly);
    }
}

