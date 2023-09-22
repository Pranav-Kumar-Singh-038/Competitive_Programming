#include <bits/stdc++.h>
using namespace std;


void solve(vector<int> vec, int x)
{
    int mn=*min_element(vec.begin(),vec.end());
    int ht = mn;
    unordered_map<int, int> m;
    for (auto it : vec)
    {
        m[it]++;
    }
    int i=mn;
    int mx=*max_element(vec.begin(),vec.end());
    while (x > 0)
    {
        if (m[i] <= x)
        {
            ht++;
            m[i+1] += m[i];
            x-=m[i];
            i++;
        }
        else{
            break;
        }
        if(i>mx)
        {
            break;
        }
    }
    if(x!=0)
    {
        if(x%vec.size()==0)
        {
            ht+=x/vec.size();
        }
        else{
            int dump=x%vec.size();
            x-=dump;
            ht+=x/vec.size();
        }
    }
    cout<<ht<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> vec(n);

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        solve(vec, x);
    }

    return 0;
}