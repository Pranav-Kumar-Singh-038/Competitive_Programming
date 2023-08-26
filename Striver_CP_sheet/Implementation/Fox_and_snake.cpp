#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    bool logic1=false;
    bool logic2=true;
    int count=0;
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            {
              cout<<"#";
            }
            else if(i%2!=0)
            {
              if(j==0  && logic1)
              {
                cout<<"#";
              }
              else if(j==m-1  && logic2)
              {
                cout<<"#";
              }
              else{
              cout<<".";
              }
            }
        }
        cout<<endl;
            if(i%2!=0)
            {
            logic1=!logic1;
            logic2=!logic2;                
            count++;
            }
    }
}
//time complexity: O(n^2)
//space complexity: O(1)

