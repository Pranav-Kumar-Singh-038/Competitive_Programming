#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<vector<int>> vec;
    vector<int> ans;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vec.push_back({a,b,c});
    }
    for(int i=0;i<vec.size();i++)
    {
        double ves1,ves2,cup,moves=0,diff;
        if(vec[i][0]>=vec[i][1])
        {
           ves1=vec[i][0];
           ves2=vec[i][1];
        }
        else{
            ves1=vec[i][1];
            ves2=vec[i][0];
        }
        cup=vec[i][2];
        diff=ves1-ves2;
        double target=(ves1+ves2)/2;
        double gap=target-ves2;
        if(diff==0)
        {
         ans.push_back(moves);
        }
        else{
         while(gap>=cup)
         {
            ves1=ves1-cup;
            ves2=ves2+cup;
            moves++;
            gap=target-ves2;
             //cout<<gap<<" ";
         }
         if(gap>0)
         {
            ans.push_back(moves+1);
         }
         else{
             ans.push_back(moves);
         }
        }
    }
    //cout<<endl;
    for(int it:ans)
    {
        cout<<it<<"\n";
    }
}