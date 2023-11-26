#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> vec;
    while(n--)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int val=vec[k-1];
    int count=0;
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]>0 && vec[i]>=val)
        {
            count++;
        }
    }
    cout<<count;
}