#include <bits/stdc++.h>
using namespace std;

vector<int> count_pairs(vector<int> nums)
{
    vector<int> freq(101, 0);
    vector<int> pair;
    unordered_map<int, int> map;
    for (auto it : nums)
    {
        map[it]++;
    }
    for (int i = 0; i < 101; i++)
    {
        freq[i] = map[i];
    }
    int pairs = 0;
    for (int i = 0; i < 101; i++)
    {
        if (freq[i] >= 2)
        {
            pairs++;
            pair.push_back(i);
        }
    }
    return pair;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    vector<int> copy = nums;
    vector<int> pairunique = count_pairs(nums);
    int pairs = pairunique.size();
    if (pairs < 2)
    {
        cout << -1 << endl;
    }
    else
    {
        int first = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (first == 0)
            {
                if (nums[i] == pairunique[0])
                {
                    first++;
                    copy[i] = 1;
                }
            }
            else
            {
                if (nums[i] == pairunique[0])
                {
                    copy[i] = 2;
                }
            }
        }
        for (int i = 1; i < pairunique.size(); i++)
        {
            int first = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (first == 0)
                {
                    if (nums[j] == pairunique[i])
                    {
                        first++;
                        copy[j] = 1;
                    }
                }
                else
                {
                    if (nums[j] == pairunique[i])
                    {
                        copy[j] = 3;
                    }
                }
            }
        }
        for(int i=0;i<copy.size();i++)
        {
            if(copy[i]>3)
            {
              copy[i]=3;
            }
        }
        for (auto it : copy)
        {
            cout << it << " ";
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