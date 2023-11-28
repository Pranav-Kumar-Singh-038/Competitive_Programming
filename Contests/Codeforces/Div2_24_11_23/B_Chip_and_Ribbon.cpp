#include <bits/stdc++.h>
using namespace std;


// TC: O(t * n * sum)
//  void solve()
//  {
//      long long int n;
//      cin >> n;
//      vector<long long int> vec(n);
//      for (long long int i = 0; i < n; i++)
//      {
//          cin >> vec[i];
//      }
//      long long int sum = accumulate(vec.begin(), vec.end(), 0ll);
//      long long int teleport = 0;
//      long long int l = 0;
//      long long int r = n - 1;
//      while (sum > 0)
//      {
//          while (vec[l] == 0)
//          {
//              l++;
//          }
//          while (vec[r] == 0)
//          {
//              r--;
//          }
//          long long int i = l;
//          while (i <= r)
//          {
//              bool condition = false;
//              if (sum == 0)
//              {
//                  break;
//              }
//              if (vec[i] > 0)
//              {
//                  vec[i]--;
//                  sum--;
//              }
//              else if (vec[i] == 0)
//              {
//                  teleport++;
//                  while (vec[i] == 0 && (i) <= r)
//                  {
//                      i++;
//                  }
//                  if (i > r)
//                  {
//                      break;
//                  }
//                  i--;
//              }
//              i++;
//          }
//          if (sum == 0)
//          {
//              break;
//          }
//          teleport++;
//      }
//      cout << teleport << endl;
//  }


//TC: O(t*n*biggest_element)
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> vec(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> vec[i];
//     }
//     int big = *max_element(vec.begin(), vec.end());
//     int counter=0;
//     while (big)
//     {
//         int gap=0;
//         int l=0;
//         int r=n-1;
//         while(vec[l]==0)
//         {
//             l++;
//         }
//         while(vec[r]==0)
//         {
//             r--;
//         }
//         for(int i=l;i<=r;i++)
//         {
//             if(vec[i]==0)
//             {
//                 while(vec[i]==0 && i<=r)
//                 {
//                     i++;
//                 }
//                 gap++;
//             }
//         }

//         int smallest=INT_MAX;
//         for (int i = 0; i < n; ++i)
//         {
//             if (vec[i] > 0 && vec[i] < smallest)
//             {
//                 smallest = vec[i];
//             }
//         }
//         if(smallest==INT_MAX)
//         {
//             break;
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(vec[i]>0)
//             {
//                 vec[i]-=smallest;
//             }
//         }
//         counter+=smallest*gap;
//     }
//     cout<<counter+big-1<<endl;
// }

//TC: O(n)
void solve()
{
 int n;
 cin>>n;
 vector<int> vec(n);
 for(int i=0;i<n;i++)
 {
    cin>>vec[i];
 }
 long long int ans=vec[0]-1;
 for(int i=1;i<n;i++)
 {
    if(vec[i]>vec[i-1])
    {
        ans+=vec[i]-vec[i-1];
    }
 }
 cout<<ans<<endl;
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}