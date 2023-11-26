#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<pair<int,int>> vec;
    while(t--)
    {
      int a,b;
      cin>>a>>b;
      vec.push_back({a,b});
    }
    for(int i=0;i<vec.size();i++)
    {
        int l,r;
        l=vec[i].first;
        r=vec[i].second;
        if(r<=3)
        {
            cout<<-1<<endl;
        }
        else if(l!=r)
        {
            cout<<r/2<<" "<<r/2<<endl;
        }
        else
        {
            bool found=false;
            if(l%2==0)
            {
                cout<<l/2<<" "<<l/2<<endl;
            }
            else
            {
               for(int i=3;i*i<=l && !found;i++)
               {
                if(l%i==0)
                {
                    cout<<i<<" "<<l-i<<endl;
                    found=true;
                }
               }
               if(found==false)
               {
                cout<<-1<<endl;
               }
            }
        }
    }
}