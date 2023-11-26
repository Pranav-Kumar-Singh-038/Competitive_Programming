#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int sum=0;
    sum=accumulate(nums.begin(),nums.end(),0);
    if(sum>=1)
    {
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
}//