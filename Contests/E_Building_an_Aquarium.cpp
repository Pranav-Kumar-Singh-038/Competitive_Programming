#include <bits/stdc++.h>
using namespace std;

bool can_fill_tank(const vector<int> &a, int h, long long x)
{
    long long water_needed = 0;
    for (int height : a)
    {
        water_needed += max(0, h - height);
        if (water_needed > x)
        {
            return false;
        }
    }
    return true;
}

void solve(long long x, const vector<int> &a)
{
    int low = *min_element(a.begin(), a.end());
    int high = low + x;
    if (a.size() == 1)
    {
        cout << low + x<<endl;
    }
    else
    {
        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (can_fill_tank(a, mid, x))
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        cout << low - 1 << endl;
    }
}

// TC: O(n)
//  void solve(vector<int> vec, int x)
//  {
//      int mn=*min_element(vec.begin(),vec.end());
//      int ht = mn;
//      unordered_map<int, int> m;
//      for (auto it : vec)
//      {
//          m[it]++;
//      }
//      int i=mn;
//      int mx=*max_element(vec.begin(),vec.end());
//      while (x > 0)
//      {
//          if (m[i] <= x)
//          {
//              ht++;
//              m[i+1] += m[i];
//              x-=m[i];
//              i++;
//          }
//          else{
//              break;
//          }
//          if(i>mx)
//          {
//              break;
//          }
//      }
//      if(x!=0)
//      {
//          if(x%vec.size()==0)
//          {
//              ht+=x/vec.size();
//          }
//          else{
//              int dump=x%vec.size();
//              x-=dump;
//              ht+=x/vec.size();
//          }
//      }
//      cout<<ht<<endl;
//  }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> vec(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        solve(x, vec);
    }

    return 0;
}