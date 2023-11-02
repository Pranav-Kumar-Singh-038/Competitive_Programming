#include <bits/stdc++.h>
using namespace std;

//Third Approach
// TC: O(n^2)
// SC: O(1)
//Streak
void solve()
{
    long long int n, q;
    cin >> n >> q;
    vector<long long int> nums;
    while (n--)
    {
        long long int x;
        cin >> x;
        nums.push_back(x);
    }
    vector<long long int> vec;
    while (q--)
    {
        long long int x;
        cin >> x;
        vec.push_back(x);
    }

    vector<long long int> powers_of_2(32);
    powers_of_2[0] = 1;
    for (int i = 1; i < 32; i++)
    {
        powers_of_2[i] = 2 * powers_of_2[i - 1];
    }

    long long int min = *min_element(nums.begin(), nums.end());
    long long int max = *max_element(nums.begin(), nums.end());
    long long int small = vec[0];
    for (long long int i = 0; i < vec.size(); i++)
    {
        if (vec[i] > small)
        {
            continue;
        }
        else
        {
            long long int power = powers_of_2[vec[i]];
            long long int sub = powers_of_2[vec[i] - 1];
            for (long long int j = 0; j < nums.size(); j++)
            {
                if (power > max || nums[j] % 2 != 0)
                {
                    continue;
                }
                else if (nums[j] % power == 0)
                {
                    nums[j] += sub;
                }
            }
            small = vec[i];
        }
    }
    for (auto it : nums)
    {
        cout << it << " ";
    }
    cout << endl;
}

// First Approach
// O(n^2)
// O(1)
// TLE
// void solve()
// {
//     long long int n, q;
//     cin >> n >> q;
//     vector<long long int> nums;
//     while (n--)
//     {
//         long long int x;
//         cin >> x;
//         nums.push_back(x);
//     }
//     vector<long long int> vec;
//     while (q--)
//     {
//         long long int x;
//         cin >> x;
//         vec.push_back(x);
//     }
//     long long int min = *min_element(nums.begin(), nums.end());
//     long long int max = *max_element(nums.begin(), nums.end());

//     for (long long int i = 0; i < vec.size(); i++)
//     {
//         long long int power = pow(2, vec[i]);
//         long long int sub = pow(2, vec[i] - 1);
//         for (long long int j = 0; j < nums.size(); j++)
//         {
//             if (power > max || nums[j]%2!=0)
//             {
//                 continue;
//             }
//             else if (nums[j] % power == 0)
//             {
//                 nums[j] += sub;
//             }
//         }
//     }
//     for (auto it : nums)
//     {
//         cout << it << " ";
//     }
//     cout << endl;
// }

// Second Approach
//  TC: O(n^2)
//  SC: O(1)
//  TLE
//  void solve() {
//      long long int n, q;
//      cin >> n >> q;
//      vector<long long int> nums;
//      vector<long long int> vec;

//     for (int i = 0; i < n; i++) {
//         long long int x;
//         cin >> x;
//         nums.push_back(x);
//     }

//     for (int i = 0; i < q; i++) {
//         long long int x;
//         cin >> x;
//         vec.push_back(x);
//     }

//     vector<long long int> powers_of_2(32);
//     powers_of_2[0] = 1;
//     for (int i = 1; i < 32; i++) {
//         powers_of_2[i] = 2 * powers_of_2[i - 1];
//     }

//     for (int i = 0; i < q; i++) {
//         long long int power = powers_of_2[vec[i]];
//         long long int sub = powers_of_2[vec[i] - 1];
//         for (int j = 0; j < n; j++) {
//             if(nums[j]%2!=0)
//             {
//                 continue;
//             }
//             if (nums[j] % power == 0) {
//                 nums[j] += sub;
//             }
//         }
//     }

//     for (auto it : nums) {
//         cout << it << " ";
//     }
//     cout << endl;
// }

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}