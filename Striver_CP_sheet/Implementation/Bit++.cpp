#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0;
    vector<string> vec;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        vec.push_back(temp);
    }
    int countminus=0;
    int countplus=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            if(vec[i][j]=='-')
            {
                countminus++;
            }
            if(vec[i][j]=='+')
            {
                countplus++;
            }
        }
    }
  x=x+countplus/2 - countminus/2;
  cout<<x;
}

//Time complexity : O(n) because O(n*string.size()) which is equal to O(n*3) 
//Space Complexity :O(1) since only countplus, countminus and x variables are being used