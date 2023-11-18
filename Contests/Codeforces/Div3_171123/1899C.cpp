#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int max = *max_element(nums.begin(), nums.end());
    int l = 0;
    int r = 1;
    vector<long long int> sums;
    while (r <= n)
    {
        int i = 0;
        if (nums[l] % 2 == 0 && (nums[r] + i) % 2 != 0)
        {
            r++;
            if (i == 0)
            {
                i++;
            }
            else
            {
                i--;
            }
        }
        else if (nums[l] % 2 != 0 && (nums[r] + i) % 2 == 0)
        {
            r++;
            if (i == 0)
            {
                i++;
            }
            else
            {
                i--;
            }
        }
        else
        {
            long long int sum;
            sum=accumulate(nums.begin()+l,nums.begin()+r,0ll);
            sums.push_back(sum);
            l=r;
            r=r+1;
        }

    }
    for(auto it:sums)
    {
        cout<<it<<endl;
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