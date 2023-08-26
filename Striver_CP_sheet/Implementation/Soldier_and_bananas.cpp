#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int k,n,w;
    cin>>k>>n>>w;
    long long int total=(w*(2*k +k*w -k))/2;
    long long int need=total-n;

    if(need>=0)
    {
        cout<<need;
    }
    else{
        cout<<0;
    }
}