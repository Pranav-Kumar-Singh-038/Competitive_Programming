#include <bits/stdc++.h>
using namespace std;

unsigned long long int gcd(unsigned long long int a,unsigned long long int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}//Euclid's Algorithm


int main()
{
    int t;
    cin>>t;
    vector<pair<int,int>> vec;
    while(t--)
    {
      int a,b;
      cin>>a>>b;
      vec.push_back({a,b});
    }
    for(int i=0;i<vec.size();i++)
    {
        int l=2;
        int sec;
        int r=vec[i].second;
        if(vec[i].first%2==0)
        {
            sec=vec[i].first;
        }
        else
        {
            sec=vec[i].first+1;
        }
        if (l+sec>vec[i].second || gcd(l,sec)==1) {
            cout << "-1" << endl;
        } else {
            cout << l << " " << sec << endl;
        }
    }
}