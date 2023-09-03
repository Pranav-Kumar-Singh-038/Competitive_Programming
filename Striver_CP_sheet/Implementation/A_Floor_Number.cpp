#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  vector<pair<int, int>> vec;
  while(t--)
  {
    int n,x;
    cin>>n>>x;
    vec.push_back({n,x});
  }
  for(int i=0;i<vec.size();i++)
  {
    int n=vec[i].first;
    int x=vec[i].second;
    double floor;
    if(n<=2)
    {
        floor=1;
    }
    else{
         floor=ceil((n - 3)/ x) + 2;
    }
    cout<<floor<<endl;
  }
}