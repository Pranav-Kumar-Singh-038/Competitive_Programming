#include <bits/stdc++.h>
using namespace std;
/*Firstly, if the array already has an odd sum, the answer is "YES". Otherwise, we need to change the parity of the
 sum, so we need to change the parity of some number. We can do in only when we have at least one even number and at
  least one odd number. Otherwise, the answer is "NO*/
// I did the same with a bit changes
int main()
{
    int t;
    cin>>t;
    vector<vector<int>> nums;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
           int val;
           cin>>val;
           vec.push_back(val);
        }
        nums.push_back(vec);
    }
    for(int i=0;i<nums.size();i++)
    { 
        int sum=accumulate(nums[i].begin(),nums[i].end(),0);
        if(sum%2!=0)
        {
            cout<<"YES";
        }
        else{
          int count=0;
          for(int j=0;j<nums[i].size();j++)
           {
            if(nums[i][j]%2!=0)
            {
                count++;
            }
           }
           if(count!=nums[i].size() && count>0)
           {
            cout<<"YES";
           }
           else{
            cout<<"NO";
           }
        }
        cout<<endl;
    }
}