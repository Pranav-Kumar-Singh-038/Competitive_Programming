#include <bits/stdc++.h>
using namespace std;

void solve(int n,int k, int x)
{
  if(k>x+1 || n<k)
  {
   cout<<-1<<endl;
  }
  else
  {
  vector<int> ans;
  int num=0; 
  while(ans.size()!=n)
  {
   if(num<=k-1)
   {
    ans.push_back(num);
    num++;
   }
   else if(k==x){
     ans.push_back(x-1);  
   }   
   else{
    ans.push_back(x);
   }
  }
  cout<<accumulate(ans.begin(),ans.end(),0)<<endl;
  }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k,x;
       cin>>n>>k>>x;
       solve(n,k,x);
    }
}