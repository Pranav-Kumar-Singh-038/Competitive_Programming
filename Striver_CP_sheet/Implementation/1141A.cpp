#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    if (m% n!=0)
    {
        cout<<-1<<endl;
    }
    else
    {
        m=m/n;
        int count=0;
        while (m != 1)
        {
            if (m % 2 != 0 && m % 3 != 0)
            {
                break;
            }
            else if (m % 2 == 0)
            {
                m = m / 2;
                count++;
            }
            else
            {
                m = m / 3;
                count++;
            }
        }
        if (m != 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
}

// void solve()
// {
//     int n, m;
//     cin >> n >> m;
//     if (m!=n && m % 2 != 0 && m % 3 != 0)
//     {
//         cout << -1 << endl;
//     }
//     else
//     {
//         if (m == n)
//         {
//             cout << 0 << endl;
//         }
//         else
//         {
//             m = m / n;
//             int count2 = 0;
//             while (m % 2 == 0)
//             {
//                 m = m / 2;
//                 count2++;
//             }
//             int count3 = 0;
//             while (m != 1)
//             {
//                 m = m / 3;
//                 count3++;
//             }
//             if (count2 + count3 == 0)
//             {
//                 cout << -1 << endl;
//             }
//             else
//             {
//                 cout << count2 + count3 << endl;
//             }
//         }
//     }
// }

int main()
{
    solve();
}