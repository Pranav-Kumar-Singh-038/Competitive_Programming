#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int temp;
    int ct=0;
    while(n!=0)
    {
        temp=n%10;
        if(temp==4 || temp==7)
        {
            ct++;
        }
        n/=10;
    }
    if(ct==4 || ct==7)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
//