#include <bits/stdc++.h>
using namespace std;
/*
If n=1 then the answer is 0. Otherwise, the 
best way is to construct the array [0,m,0,…,0].
 For n=2 we can't reach answer more than m
 and for n>2 we can't reach the answer more than 2m
 because each unit can't be used more than twice. 
 So the answer can be represented as min(2,n−1)⋅m.
*/
int main()
{
    int t;
    cin>>t;
    vector<vector<int>> vec;
    vector<int> ans;
    for(int i=0;i<t;i++)
    {
      int a,b;
      cin>>a>>b;
      vec.push_back({a,b});
    }
    for(int i=0;i<t;i++)
    {
     int n=vec[i][0];
     int m=vec[i][1];
     if(n==1)
     {
        cout<<0<<endl;
     }
     else{
        cout<<min(2,n-1)*m<<endl;
     }
    }
}



//My: TLE
/*
int main()
{
    int t;
    cin>>t;
    vector<vector<int>> vec;
    vector<int> ans;
    for(int i=0;i<t;i++)
    {
      int a,b;
      cin>>a>>b;
      vec.push_back({a,b});
    }
    for(int i=0;i<t;i++)
    {
     int n=vec[i][0];
     int m=vec[i][1];

     int num=n/2;
     vector<int> nums;
     int curSum=0;
     for(int j=0;j<n;j++)
     {
        int x;
        if(j%2==0)
        {
            x=0;
        }
        else if(j==(n-1) || j==(n-2)){
            x=m-curSum;
        }
        else{
            x=m/num;
        }
        nums.push_back(x);
        curSum+=x;
     }
     int sum=0;
    for(int k=0;k<nums.size()-1;k++)
    {
        int diff=abs(nums[k]-nums[k+1]);
        sum=sum+diff;
    }
    ans.push_back(sum);
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}
*/