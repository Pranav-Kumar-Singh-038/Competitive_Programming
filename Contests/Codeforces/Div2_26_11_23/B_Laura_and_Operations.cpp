#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int small = min(a, min(b, c));
    // cout<<small<<endl;
    a -= small;
    b -= small;
    c -= small;
    int ans1, ans2, ans3;
    // cout << a << " " << b << " " << c << " " << endl;
    if (a == 0 && b == 0 && c == 0)
    {
        ans1 = 1;
        ans2 = 1;
        ans3 = 1;
    }
    else if((a==0 && b==0) || (b==0 && c==0 )||(c==0 && a==0))
    {
        int large=max(a,max(b,c));
        if(large%2==0)
        {
            ans1=1;
            ans2=1;
            ans3=1;
        }
        else
        {
          
        }
    }
    else if (a == 0 && b != 0 && c != 0)
    {
        if (b == c)
        {
            ans1 = 1;
            ans2 = 0;
            ans3 = 0;
        }
        else if (b >= c / 2)
        {
            ans1 = 0;
            ans2 = 1;
            ans3 = 0;
        }
        else if(b/2 <= c )
        {
            ans3 = 1;
            ans2 = 0;
            ans1=0;
        }
        else
        {
            ans1 = 0;
            ans2 = 0;
            ans3 = 0;
        }
    }
    else if (b == 0 && c != 0 && a != 0)
    {
        if (a == c)
        {
            ans2 = 1;
            ans1 = 0;
            ans3 = 0;
        }
        else if (a >= c / 2)
        {
            ans1 = 1;
            ans2 = 0;
            ans3 = 0;
        }
        else if (c >= a / 2)
        {
            ans1 = 0;
            ans2 = 0;
            ans3 = 1;
        }
        else
        {
            ans1 = 0;
            ans2 = 0;
            ans3 = 0;
        }
    }
    else if (c == 0 && a != 0 && b != 0)
    {
        if (a == b)
        {
            ans1 = 0;
            ans2 = 0;
            ans3 = 1;
        }
        else if (a >= b / 2)
        {
            ans1 = 1;
            ans2 = 0;
            ans3 = 0;
        }
        else if (b >= c / 2)
        {
            ans1 = 0;
            ans2 = 1;
            ans3 = 0;
        }
        else
        {
            ans1 = 0;
            ans2 = 0;
            ans3 = 0;
        }
    }
    else if (a > 0)
    {
        ans1 = 1;
        ans2 = 0;
        ans3 = 0;
    }
    else if (b > 0)
    {
        ans1 = 0;
        ans2 = 1;
        ans3 = 0;
    }
    else
    {
        ans1 = 0;
        ans2 = 0;
        ans3 = 1;
    }
    cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
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