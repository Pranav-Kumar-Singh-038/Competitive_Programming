#include <bits/stdc++.h>
using namespace std;
/*
Suppose x≤y≤z. If y≠z then the answer is -1, because z is the overall maximum among all three integers a, b
 and c and it appears in two pairs (so it should appear at most twice among x, y and z). Otherwise, the answer 
 exists and it can be x, x and z (it is easy to see that this triple fits well).
*/

//I did the same
int main()
{
    int t;
    cin>>t;
    vector<vector<int>> vec;
    while(t--)
    {
            int x,y,z;
            cin>>x>>y>>z;
            vec.push_back({x,y,z});
    }
    for(int i=0;i<vec.size();i++)
    {
        sort(vec[i].begin(),vec[i].end(),[](int x,int y){return x>y;});
        int largest=vec[i][0];
        if(vec[i][0]!=vec[i][1])
        {
            cout<<"NO"<<endl;
        }
        else
        {
          cout<<"YES"<<endl;
          cout<<vec[i][0]<<" "<<vec[i][2]<<" "<<vec[i][2]<<endl;
        }

    }
}