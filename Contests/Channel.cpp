#include <bits/stdc++.h>
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
          int countMinus=0;
          bool logic=false;
          for(int i=0;i<it.second[2];i++)
          {
            if(count==it.second[0])
            {
                logic=true;
                break;
            }
            if(it.first[i]=='+')
            {
                countPlus++;
                count++;
            }
            else if(it.first[i]=='-'){
                countMinus++;
                count--;
            }
            if(count==it.second[0])
            {
                logic=true;
                break;
            }
          }
          if(logic)
          {
            cout<<"YES"<<endl;
          }
          else if( (countPlus+it.second[1]==it.second[0]) && logic==false)
          {
            cout<<"MAYBE"<<endl;
          }
          else if((logic==false) && (countPlus+it.second[1]!=it.second[0])){
            cout<<"NO"<<endl;
          }
        }
}

