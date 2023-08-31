#include <bits/stdc++.h>
using namespace std;
//TC: O(n)
//SC: O(n)
int main()
{
    int n;
    cin>>n;
    string st;
    cin>>st;
    vector<char> ch;
    int gap=0;
    for(int i=0;i<n;i+=gap)
    {
     ch.push_back(st[i]);
     gap++;
    }
    for(char it:ch)
    {
        cout<<it;
    }
}