#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> vec[i][j];
        }
    }
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j==0)
            {
              x+=vec[i][j];
            }
            else if(j==1)
            {
              y+=vec[i][j];
            }
            else
            {
              z+=vec[i][j];
            }
        }
    }
    if(x==0 && y==0 && z==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main()
{
    solve();
}