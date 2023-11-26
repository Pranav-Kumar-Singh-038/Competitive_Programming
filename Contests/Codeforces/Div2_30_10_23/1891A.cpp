#include <bits/stdc++.h>
using namespace std;

bool isPowerOf2(int number)
{
    if (number <= 0)
    {
        return false; // 0 and negative numbers are not powers of 2
    }

    // A power of 2 has only one bit set in its binary representation.
    // So, if you AND the number with the number minus one, it should be equal to 0.
    return (number & (number - 1)) == 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < nums.size(); i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    bool ans = true;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i + 1] >= nums[i])
        {
            continue;
        }
        else
        {
            cout << i + 1 << endl;
            if (!isPowerOf2(i + 1))
            {
                ans = false;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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