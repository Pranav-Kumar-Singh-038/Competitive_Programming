#include <bits/stdc++.h>
using namespace std;
//Formula Approach
// The logic of the formula is to make the number so large so that it only less than double of itself
void solve()
{
    long long int n, m, a;
    cin >> n >> m >> a;
    long long int ans = ((m + a - 1) / a) * ((n + a - 1) / a);

    cout << ans;
}
//My approach
void solve()
{
    long long int n, m, a;
    cin >> n >> m >> a;
    long long int length;
    long long int breadth;
    if (n % a == 0)
    {
        length = n / a;
    }
    else
    {
        length = n / a + 1;
    }
    if (m % a == 0)
    {
        breadth = m / a;
    }
    else
    {
        breadth = m / a + 1;
    }
    cout << length * breadth;
}

int main()
{

    solve();
}