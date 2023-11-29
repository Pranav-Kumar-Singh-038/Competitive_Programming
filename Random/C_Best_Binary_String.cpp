#include <bits/stdc++.h>
using namespace std;

//TC: O(n)
//SC: O(1)
void solve()
{
    string x;
    cin>>x;
    char temp='0';
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='?')
        {
            x[i]=temp;
        }
        temp=x[i];
    }
    cout<<x<<endl;
}

//TC: O(n)
//SC: O(1)
// void solve()
// {
//     string x;
//     cin >> x;
//     int l = 0;
//     int r = x.size() - 1;
//     while (x[l] == '?' && l <= x.size() - 1)
//     {
//         x[l] = '0';
//         l++;
//     }
//     while (x[r] == '?' && r >= 0)
//     {
//         x[r] = '1';
//         r--;
//     }
//     for (int i = l; i <= r; i++)
//     {
//         if (x[i] == '?')
//         {
//             int startindex = i;
//             char start = x[i - 1];
//             while (x[i] == '?' && i <= r)
//             {
//                 i++;
//             }
//             int endindex = i - 1;
//             char end = x[i];
//             if (start == end)
//             {
//                 for (int i = startindex; i <= endindex; i++)
//                 {
//                     x[i] = end;
//                 }
//             }
//             else
//             {
//                 for (int i = startindex; i <= endindex; i++)
//                 {
//                     x[i] = end;
//                 }
//             }
//         }
//     }
//     cout<<x<<endl;
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}