#include <bits/stdc++.h>
using namespace std;

bool isDistinct(int n)
{
    string str=to_string(n);
    for(int i=0;i<str.size();i++)
    {
        for(int j=i+1;j<str.size();j++)
        {
            if(str[i]==str[j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int year;
    cin>>year;
    bool ans;
    while(!ans)
    {
        year+=1;
        ans=isDistinct(year);

    }
    
    cout<<year;
}