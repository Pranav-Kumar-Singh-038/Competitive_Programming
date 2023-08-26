#include <bits/stdc++.h>
using namespace std;
//T C: O(n)
//S C: O(1)
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        p.push_back({x,y});
    }
    int max=0;
    int temp=0;
    for(auto i:p)
    {
        temp=temp+i.second-i.first;
        if(temp>max)
        {
        max=temp;
        }
        //cout<<max<<" ";
    }
    cout<<max;
}