#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, bottle, volume, limes, slices, salt, volReq, saltReq;
    cin>>num>>bottle>>volume>>limes>>slices>>salt>>volReq>>saltReq;
    
    volume=volume*bottle;
    slices=limes*slices;
    bottle=min({volume/volReq,slices,salt/saltReq})/num;
    cout<<bottle;
}