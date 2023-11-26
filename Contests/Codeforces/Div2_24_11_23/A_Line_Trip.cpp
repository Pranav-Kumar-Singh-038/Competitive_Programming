#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    int x;
    cin >> n >> x;
    vector<int> vec(n);
    int prev=0;
    int gap;
    int maxgap=-1;
    int i;
    for ( i = 0; i < n; i++)
    {
        cin >> vec[i];
        if(vec[i]>x)
        {
            break;
        }
        gap=vec[i]-prev;
        if(gap>maxgap)
        {
            maxgap=gap;
        }
        prev=vec[i];
    }
    int last=x-vec[i-1];
    if(2*last>maxgap)
    {
        maxgap=2*last;
    }
    // for(auto it:vec)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    cout<<maxgap<<endl;
}

// void solve()
// {
//     int n;
//     int x;
//     cin >> n >> x;
//     vector<int> vec(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> vec[i];
//     }

//     int lowest = vec[0];
//     int highest = vec[n - 1];
//     int petrol = 0;
//     if(n==1)
//     {
//         if(x<vec[0])
//         {
//             petrol=2*x;
//         }
//         else
//         {
//             int gap=vec[0];
//             int gap2=2*(x-vec[0]);
//             if(gap>=gap2)
//             {
//                 petrol=gap;
//             }
//             else
//             {
//                 petrol=gap2;
//             }
//         }
//      cout<<petrol<<endl;
//      return;
//     }
//     if (x < lowest)
//     {
//         petrol = 2 * x;
//     }
//     else if (x == lowest)
//     {
//         petrol = x;
//     }
//     else if (x > lowest && highest > x)
//     {
//         int maxgap = 0;
//         int gap;
//         int step;
//         for (int i = 1; i < n; i++)
//         {
//             step=i;
//             if (vec[i] <= x)
//             {
//                 gap = vec[i] - vec[i - 1];
//                 if (gap > maxgap)
//                 {
//                     maxgap = gap;
//                 }
//             }
//         }
//         int toadd=x-vec[step-1];
//         if((2*toadd)>maxgap)
//         {
//         maxgap=toadd;
//         petrol=2*maxgap;
//         }
//         else
//         {
//         petrol=maxgap;
//         }
//     }
//     else if(x>highest)
//     {
//         int maxgap=0;
//         int gap;
//         for(int i=1;i<n;i++)
//         {
//             gap=vec[i]-vec[i-1];
//             if(gap>maxgap)
//             {
//                 maxgap=gap;
//             }
//         }
//         int last=x-vec[n-1];
//         if((2*last)>maxgap)
//         {
//             maxgap=last;
//             petrol=2*maxgap;
//         }
//         else
//         {
//             petrol=maxgap;
//         }
//     }
//     cout<<petrol<<endl;
//     return;
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