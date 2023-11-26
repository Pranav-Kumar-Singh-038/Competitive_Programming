#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<7;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int j=0;
    while(n>0)
    {
     n=n-vec[j];
     j++;
     j=j%7;
    }
    if(j==0)
    {
        cout<<7;
    }
    else{
        cout<<j;
    }
}