#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string x;
    cin >> x;
    int f1 = 1;
    int f2 = 0;
    n--;
    string y;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == x)
        {
            f1++;
        }
        else
        {
            y = s;
            f2++;
        }
    }
    if (f1 > f2)
    {
        cout << x;
    }
    else
    {
        cout << y;
    }
}