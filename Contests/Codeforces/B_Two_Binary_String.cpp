#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<pair<string,string>> vec;
    while(t--)
    {
     string a,b;
     cin>>a>>b;
     vec.push_back({a,b}); 
    }
    for(int i=0;i<vec.size();i++)
    {
        string s1=vec[i].first;
        string s2=vec[i].second;
        bool flag=false;
        for(int i=s1.size()-2;i>=0;i--)
        {
            if ((s1[i]=='0' && s2[i]=='0') && (s1[i+1]=='1' && s2[i+1]=='1'))
            {
                cout<<"YES"<<endl;
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            cout<<"NO"<<endl;
        }
    }
}