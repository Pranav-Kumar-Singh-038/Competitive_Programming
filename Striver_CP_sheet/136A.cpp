#include <bits/stdc++.h>
using namespace std;
// The input array basically showcases who gave a give to that index
// in first 2 3 4 1 means 1 recieved from 2, 2 from 3, 3 from 4, 4 from 1
// that is why in ans 1 gave to 4, 2 to 2, 3 to 2, and 4 to 3
void solve()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    vector<int> ans(n, 0);

    for (int i=0;i<vec.size();i++)
    {
      ans[vec[i]-1]=i+1;
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}

int main()
{

    solve();
}