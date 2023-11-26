#include <bits/stdc++.h>
using namespace std;
//TC: O(n^2)
//SC: O(1)
int main()
{
    int t;
    cin>>t;
    vector<string> str;
    while(t--)
    {
        string x;
        cin>>x;
        str.push_back(x);
    }
    for(auto st:str)
    {
      auto it1=st.begin();
      auto it2=--st.end();
      while(*it1!='1' && it1<it2)
      {
        it1++;
      }
      while(*it2!='1' && it2>it1)
      {
        it2--;
      }
      int count=0;
      while(it1<it2)
      {
        if(*it1=='0')
        {
            count++;
        }
        it1++;
      }
      cout<<count<<endl;
    }
}