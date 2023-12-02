#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int l = 0;
    int r = n - 1;
    while (vec[l] == 1 && l < n - 1)
    {
        l++;
    }
    while (vec[r] == 1 && r > 0)
    {
        r--;
    }

    if (vec[l]==0 && vec[r] == 0)
    {
        int biggest = 0;
        int counter = 0;
        for (int i = l; i <= r; i++)
        {
            if (vec[i] == 0)
            {
                counter++;
                if (counter > biggest)
                {
                    biggest = counter;
                }
            }
            else
            {

                counter = max(0, --counter);
            }
        }
        int initialones = 0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]==1)
            {
                initialones++;
            }
        }
        cout<<biggest+initialones<<endl;
        return;
    }
    else
    {
        cout << n-1 << endl;
        return;
    }
}

int main()
{
    solve();
}