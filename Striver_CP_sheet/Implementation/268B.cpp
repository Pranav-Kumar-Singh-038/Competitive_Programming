#include <bits/stdc++.h>
using namespace std;

//O(n), O(1)
void solve()
{
    int n;
    cin>>n;
    int buttons=0;
    int unique=n-1;
    int counter=1;
    //for first button he presses n-1, 2*(n-2), 3*(n-3)... finally he presses the correct sequence = n.
    while(unique>0)
    {
     buttons+=counter*unique;
     unique--;
     counter++;
    }
    cout<<buttons+n;
}

int main()
{
solve();
}