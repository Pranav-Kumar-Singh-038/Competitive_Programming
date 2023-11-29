#include <bits/stdc++.h>
using namespace std;

//TC: O(n^2)
//SC: O(1)
// void solve()
// {
//         int n;
//         cin >> n;
//         vector<int> p(n);
//         for (int j = 0; j < n; ++j)
//         {
//             cin >> p[j];
//             --p[j];
//         }
//         for (int j = 0; j < n; ++j)
//         {
//             int cnt = 0;
//             int k = j;
//             do
//             {
//                 ++cnt;
//                 k = p[k];
//             } while (k != j);
//             cout << cnt << " ";
//         }
//         cout << endl;
// }

//TC: O(n)
//SC: O(n^2)
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> vec(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> vec[i];
//         vec[i]--;
//     }
//     set<vector<int>> allcycles;
//     for (int i = 0; i < n; i++)
//     {
//         if(vec[i]==-1)
//         {
//             continue;
//         }
//         vector<int> cycle;
//         int target=i;
//         int index = target;
//         cycle.push_back(index);
//         int ans=0;
//         while (vec[index] != target)
//         {
//             ans++;
//             index = vec[index];
//             cycle.push_back(index);
//         }
//         for(int i=0;i<cycle.size();i++)
//         {
//           vec[cycle[i]]=-1;
//         }
//         allcycles.insert(cycle);
//     }

//     vector<vector<int>> vecycle;
//     for (auto it : allcycles)
//     {
//         vector<int> t;
//         for (auto i : it)
//         {
//             t.push_back(i);
//         }
//         vecycle.push_back(t);
//     }
//     vector<int> ans(n);
//     for (int i = 0; i < vecycle.size(); i++)
//     {
//         int val =vecycle[i].size();
//         for (int j = 0; j < val; j++)
//         {
//             ans[vecycle[i][j]]=val;
//         }
//     }
//     for(auto it:ans)
//     {
//         cout<<it<<" ";
//     }
//     cout<<endl;
// }

//Optimal
//TC: O(n)
//SC: O(n)
void solve()
{
  int n;
  cin>>n;
  vector<int> vec(n);
  for(int i=0;i<n;i++)
  {
    cin>>vec[i];
    vec[i]--;
  }
  vector<int> result(n);
  for(int i=0;i<n;i++)
  {
    if(result[i]!=0)
    {
        continue;
    }
    int index=i;
    int counter=1;
    vector<int> cycle;
    cycle.push_back(index);
    while(vec[index]!=i)
    {
        counter++;
        index=vec[index];
        cycle.push_back(index);
    }
    for(int i=0;i<cycle.size();i++)
    {
        result[cycle[i]]=counter;
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<result[i]<<" ";
  }
  cout<<endl;
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        solve();
    }
}