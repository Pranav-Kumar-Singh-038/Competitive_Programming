#include <bits/stdc++.h>
using namespace std;
//TC O(n)
//SC O(1)
int main(){
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int count=1;
    int maxCount=1;
    for(int i=0;i<n-1;i++)
    {
      if(vec[i]<vec[i+1])
      {
        count++;
      }
      else{
        count=1;
      }
      if(count>maxCount)
      {
        maxCount=count;
      }
    }
    cout<<maxCount;
}