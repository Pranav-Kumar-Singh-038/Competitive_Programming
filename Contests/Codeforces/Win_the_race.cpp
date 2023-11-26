#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> bin;
    vector<int> ram;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        bin.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ram.push_back(x);
    }
    int diff;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        diff=bin[i]-ram[i];
        sum+=diff;
    }
    if(diff>0)
    {
        cout<<"Binod";
    }
    else if(diff<0)
    {
        cout<<"Ramesh";
    }
    else
    {
        cout<<"Tie";
    }
}