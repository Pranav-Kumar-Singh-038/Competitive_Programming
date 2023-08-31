#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int i=0;
    vector<vector<string>> vec;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string> temp;
         while(n--)
         {
          string x;
          cin>>x;
          temp.push_back(x);
         }
        vec.push_back(temp);
    }
    for(auto it:vec)
    {
        int count=0;
        for(int i=0;i<it.size();i++)
        {
            for(int j=0;j<it[i].size();j++)
            {
                if(j==it[i].size()-1 && it[i][j]=='R')
                { 
                   count++;
                }
                if(i==it.size()-1 && it[i][j]=='D')
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}