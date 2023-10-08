#include <bits/stdc++.h>
using namespace std;

void solve(vector<double> vec)
{
    sort(vec.begin(), vec.end());
    map<int, double> gaps;
    double dist = 0.0;
    if (vec.size() % 2 == 0)
    {
        dist = ((vec[vec.size() - 2] + vec[vec.size() - 1]) / 2.0) - ((vec[0] + vec[1]) / 2.0);
        cout << dist << endl;
    }
    else
    {

        for (int i = 0; i < vec.size() - 2; i += 2)
        {
            double sum = vec[i+2]-(vec[i] + vec[i + 2]) / 2.0;
            gaps[sum] = i;
        }
        auto it = gaps.begin();
        int index = it->second;
        if (index != 0 && index != vec.size() - 3)
        {
            dist = ((vec[vec.size() - 2] + vec[vec.size() - 1]) / 2.0) - ((vec[0] + vec[1]) / 2.0);
            cout << dist << endl;
        }
        else if (index == 0)
        {
            dist = ((vec[vec.size() - 2] + vec[vec.size() - 1]) / 2.0) - ((vec[0] + vec[2]) / 2.0);
            cout << dist << endl;
        }
        else
        {
            dist = ((vec[vec.size() - 3] + vec[vec.size() - 1]) / 2.0) - ((vec[0] + vec[1]) / 2.0);
            cout << dist << endl;
        }
    } 
}

int main()
{
    int t;
    cin >> t;
    int i=1;
    while (t--)
    {
        int n;
        cin >> n;
        vector<double> nums;
        while (n--)
        {
            int x;
            cin >> x;
            nums.push_back(x);
        }
        cout<<"Case #"<<i<<": ";
        solve(nums);
        i++;
    }
}