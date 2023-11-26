#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    vector<vector<int>> vec;
    while(t--)
    {
        vector<int> nums;
        int n;
        cin>>n;
        while(n--)
        {
            int x;
            cin>>x;
            nums.push_back(x);
        }
        vec.push_back(nums);
    }
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i].size()%2==0)
        {
            cout<<2<<endl<<1<<" "<<vec[i].size()<<endl<<1<<" "<<vec[i].size()<<endl;
        }
        else
        {
            cout<<4<<endl<<1<<" "<<2<<endl<<1<<" "<<2<<endl<<2<<" "<<vec[i].size()<<endl<<2<<" "<<vec[i].size()<<endl;
        }
    }
}
