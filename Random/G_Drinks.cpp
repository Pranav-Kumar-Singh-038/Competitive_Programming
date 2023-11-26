#include <bits/stdc++.h>
using namespace std;

void solve(vector<double> nums)
{
    double sum=0;
    for(int i=0;i<nums.size();i++)
    {
      sum+=nums[i]/100;
    }
    cout<<setprecision(14)<<(sum/nums.size())*100;
}

int main()
{
 int n;
 cin>>n;
 vector<double> inp;
 while(n--)
 {
    int x;
    cin>>x;
    inp.push_back(x);
 }
 solve(inp);
}