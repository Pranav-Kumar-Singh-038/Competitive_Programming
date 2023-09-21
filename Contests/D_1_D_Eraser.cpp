#include <bits/stdc++.h>
using namespace std;

void solve(int n,int k, string s)
{
    int i=0,j=n-1;
    while(s[i]!='B' && i!=n)
    {
        i++;
    }
    while(s[j]!='B' && j!=-1)
    {
        j--;
    }
    int num=0;
    if(i==j)
    {
        cout<<1<<endl;
    }
    else if(i==n || j==-1){
        cout<<0<<endl;
    }
    else
    {
        while(i<=j)
        {
            i+=k;
            num++;
            while(s[i]!='B' && i<n)
            {
             i++;
            }
        }
        cout<<num<<endl;
    }

}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    solve(n,k,s);
  }
}