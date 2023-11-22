#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> sticks(n);
    for(int i=0;i<n;i++)
    {
        cin>>sticks[i];
    }
    sort(sticks.begin(),sticks.end());
    long long int sum1=0,sum2=0;
    for(int i=0;i<n/2;i++)
    {
        sum1+=sticks[i];
    }
    for(int i=n/2;i<n;i++)
    {
        sum2+=sticks[i];
    }
    long long int ans=sum1*sum1+sum2*sum2;
    cout<<ans;
}

int main()
{
    solve();
}