#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    //long long int distance = min(a, b) + min(a + b, c) + min(max(a, b), c + min(a, b));
    long long int distance = min(a, b + c) + min(c, a + b) + min(b, a + c);
    cout << distance << endl;
}

int main()
{
    solve();
}