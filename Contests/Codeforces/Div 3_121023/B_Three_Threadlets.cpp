#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c)
{
    int mn=min({a,b,c});
    int mx=max({a,b,c});
    int moves=0;
    int snd=a+b+c-mn-mx;
    for(int i=0;i<2;i++)
    {
        // cout<<moves<<endl;
      while(mx>mn && moves< 3)
      {
        mx-=mn;
        moves++;
      }
      if(mn==mx)
      {
       mx=snd;
      }
      else if(mn!=mx || moves>=4){
        cout<<"NO"<<endl;
        return;
      }
    }
    // cout<<moves<<endl;
    if(moves<4)
    {
    cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }
}

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int a,b,c;
    cin>>a>>b>>c;
    solve(a,b,c);
 }
}