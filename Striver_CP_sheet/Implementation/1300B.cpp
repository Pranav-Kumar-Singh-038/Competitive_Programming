#include <bits/stdc++.h>
using namespace std;

//Explanation: First sort the array since median is found of sorted arrays
// After dividing into two arrays of 2x+1 and 2y+1 elements respectively
// and finding medians ai and aj where ai<aj (say), now we know that
// there are x+y elements in total which are smaller than aj. Since
// x elements are smaller than ai and y elements are smaller than aj
// this implies x+y<j
// we know that 2x+1 + 2y+1=2n
// this means x+y=n-1
// this means n-1<j
// which means index of j is atleast n 
// since minimum difference is asked so we need nearest number near aj
// which would be ai. and aj is greater so ai is atleast n-1
// the answer is nums[n] - nums[n - 1]
void solve()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < 2 * n; i++)
    {
        long long int x;
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    cout << nums[n] - nums[n - 1] << endl;
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