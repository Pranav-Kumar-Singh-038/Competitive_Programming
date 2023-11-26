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
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
}