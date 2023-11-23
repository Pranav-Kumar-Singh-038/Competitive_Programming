#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> kid(n);
    for (int i = 0; i < n; i++)
    {
        cin >> kid[i];
        kid[i]--;
    }
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        int jump = kid[i];
        if (kid[i] == i )
        {
            ans[i]++;
            continue;
        }
        else
        {
            while (kid[jump] != i)
            {
                ans[i]++;
                jump = kid[jump];
            }
            ans[i] += 2;
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

// O(n^2)
//  void solve()
//  {
//      int n;
//      cin >> n;
//      vector<int> kid(n);
//      for (int i = 0; i < n; i++)
//      {
//          cin >> kid[i];
//      }
//      vector<int> ans(n, 0);
//      for (int i = 0; i < n; i++)
//      {
//          int jump = kid[i] - 1;
//          if(kid[i]==i+1)
//          {
//              ans[i]++;
//              continue;
//          }
//          else
//          {
//              while (kid[jump] != i + 1)
//              {
//                  ans[i]++;
//                  jump=kid[jump]-1;
//              }
//              ans[i]+=2;
//          }
//      }
//      for(auto it:ans)
//      {
//          cout<<it<<" ";
//      }
//      cout<<endl;
//  }

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        solve();
    }
}