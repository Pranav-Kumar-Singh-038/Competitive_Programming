#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums)
{
    long long int sum=accumulate(nums.begin(),nums.end(),0ll);
    cout<<-1*sum<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      n--;
      vector<int> nums;
      while(n--)
      {
        int x;
        cin>>x;
        nums.push_back(x);
      }
      solve(nums);
    }
}