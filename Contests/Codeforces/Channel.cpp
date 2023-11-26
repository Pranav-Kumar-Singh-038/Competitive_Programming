#include  <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int len=t;
    vector<pair<string,vector<int>>> vec;
    while(t--)
    {
        int n,a,q;
        cin>>n>>a>>q;
        vector<int> temp;
        temp.push_back(n);
        temp.push_back(a);
        temp.push_back(q);
        string x;
        cin>>x;
        pair<string,vector<int>> p;
        p=make_pair(x,temp);
        vec.push_back(p);
    }
    for(auto it:vec)
        {
          int count=it.second[1];
          int countPlus=0;
          int flag=-1;
          if(it.second[1]==it.second[0])
          {
            cout<<"YES"<<endl;
          }
          else
          {
            for(int i=0;i<it.second[2];i++)
            {
              if(it.first[i]=='+')
                {
                    countPlus++;
                    count++;
                }
              else
                {
                    count--;
                }
              if (count == it.second[0]) 
              {
                    flag = 1;
                    break;
              }
              if (it.second[1] + countPlus >= it.second[0]) 
              {
                    flag = 2;
              } 
            }
          if(flag==1)
          {
            cout<<"YES"<<endl;
          }
          else if(flag==-1)
          {
            cout<<"NO"<<endl;
          }
          else {
            cout<<"MAYBE"<<endl;
          }
          }
        }
}

