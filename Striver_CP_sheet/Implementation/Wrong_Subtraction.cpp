#include <bits/stdc++.h>
using namespace std;
//TC : O(k)
//SC : O(1)
int main()
{
    int n,k;
    cin>>n>>k;
    while(k!=0)
    {
        if(n%10==0)
        {
          n/=10;
          k--;
        }
        else
        {
          n--;
          k--;
        }
    }
    cout<<n;
}