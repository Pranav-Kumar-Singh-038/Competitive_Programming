#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string x;
    cin >> x;
    int counta = 0;
    int countb = 0;
    cout<<x[n-1]<<endl;
    // for (auto it : x)
    // {
    //     if (it == 'A')
    //     {
    //         counta++;
    //     }
    //     else
    //     {
    //         countb++;
    //     }
    // }
    // if (counta > countb)
    // {
    //     if (x[n - 1] == 'A')
    //     {
    //         cout << "A" << endl;
    //     }
    //     else
    //     {
    //         cout << "B" << endl;
    //     }
    // }
    // else if (counta < countb)
    // {
    //     if (x[n - 1] == 'B')
    //     {
    //         cout << "B" << endl;
    //     }
    //     else
    //     {
    //         cout << "A" << endl;
    //     }
    // }
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