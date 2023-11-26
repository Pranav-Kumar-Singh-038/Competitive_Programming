#include<bits/stdc++.h>

using namespace std;
//Time complexity: O(n)
//Space complexity: O(1)
int main()
{
    int n;
    cin>>n;
    vector<int> ht;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ht.push_back(x);
    }
    int* small=&ht[0];
    for(int i=1;i<n;i++)
    {
      if(*small>=ht[i])
      {
        small=&ht[i];
      }
    }
    int* big=&ht[0];
    for(int i=1;i<n;i++)
    {
      if(*big<ht[i])
      {
        big=&ht[i];
      }
    }
    int seconds=0;
    if(big>small )
    {
     seconds=(&ht[n-1]-small) + (big-&ht[0])-1;
    }
    else
    {
      seconds=(&ht[n-1]-small) + (big-&ht[0]);
    }
    cout<<seconds;
}