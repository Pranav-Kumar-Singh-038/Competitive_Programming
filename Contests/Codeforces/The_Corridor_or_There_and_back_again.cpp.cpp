#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<vector<pair<int,int>>> vec;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> nums;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            nums.push_back({a,b});
        }
        vec.push_back(nums);
    }
    vector<int> arr;
    for(int i=0;i<vec.size();i++)
    {
        vector<int> times;
        for(int j=0;j<vec[i].size();j++)
        {
           int trap=vec[i][j].first;
           int time=vec[i][j].second;
           int roompos=(time-1)/2+trap;
           times.push_back(roompos);
        }
        int ans=*min_element(times.begin(),times.end());
        arr.push_back(ans);
    }
    for(int it:arr)
    {
        cout<<it<<endl;
    }
}