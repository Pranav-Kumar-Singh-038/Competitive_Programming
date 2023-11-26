#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums)
{
  sort(nums.begin(),nums.end());
  long int prod=1;
  for(int i=1;i<nums.size();i++)
  {
   prod*=nums[i];
  }
  cout<<prod*(nums[0]+1)<<endl;
}

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    vector<int> vec;
    while(n--)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    solve(vec);
 }
}