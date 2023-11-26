#include <bits/stdc++.h>
using namespace std;

// int helper(int l, string x)
// {
//     while (x[l] == '#' && l<x.size())
//     {
//         l++;
//     }
//     return l;
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     string x;
//     cin >> x;
//     if (n == 1)
//     {
//         if (x[0] == '.')
//         {
//             cout << 1 << endl;
//         }
//         else
//         {
//             cout << 0 << endl;
//         }
//         return;
//     }
//     else
//     {
//         int l = 0;
//         int r;
//         int single = 0;
//         int twos = 0;
//         int more = 0;
//         l = helper(l, x);
//         r = l + 1;
//         while (l < n && r < n)
//         {
//             if (x[l] == '.' && x[r] == '#')
//             {
//                 single++;
//                 l = helper(r, x);
//                 r = l + 1;
//             }
//             else if (x[l] == '.' && x[r] == '.')
//             {
//                 while (x[r] == '.' &&r<n)
//                 {
//                     r++;
//                 }
//                 if(r==n)
//                 {
//                     r--;
//                 }
//                 int diff = r - l;
//                 if (diff > 2)
//                 {
//                     more++;
//                 }
//                 else
//                 {
//                     twos++;
//                 }
//                 l = helper(r, x);
//                 r = l + 1;
//             }
//         }
//         // cout << single << " " << twos << " " << more << endl;
//         if (more != 0)
//         {
//             cout << "2" << endl;
//         }
//         else
//         {
//             long long int ans = (long long)single + 2 * ((long long)twos);
//             cout << ans << endl;
//         }
//     }
// }

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag=false;
    int count=0;
    if(n==1)
    {
        if(s[0]=='.')
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        return;
    }
    else if(n==2)
    {
        for(auto it:s)
        {
            if(it=='.')
            {
                count++;
            }
        }
        cout<<count<<endl;
        return;
    }
    for(int i=0;i<n-2;i++)
    {
     if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
     {
       flag=true;
     }
    }
    if(flag)
    {
        cout<<2<<endl;
        return;
    }
    else
    {
        for(auto it:s)
        {
            if(it=='.')
            {
                count++;
            }
        }
        cout<<count<<endl;
        return;
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