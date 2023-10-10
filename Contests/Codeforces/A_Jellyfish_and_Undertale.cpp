#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, vector<int> vec)
{
    sort(vec.begin(), vec.end());
    int timer = b;
    long long int total = timer - 1;
    timer = 1;
    // cout<<total<<endl;
    int i=0;
    while(i<vec.size())
    {
        // cout<<i<<endl;
        if (vec[i] < a)
        {
            int temp=timer;
            while (temp <= a && i < vec.size())
            {
                int temp=timer+vec[i];
                if(temp>a || i==vec.size())
                {
                    break;
                }
                else{
                    timer+=vec[i];
                    i++;
                }
            }
            if(temp>a)
            {
                i--;
                temp-=vec[i];
            }
            timer=temp;
            cout<<timer<<endl;
            total += timer - 1;
            timer = 1;
            // cout<<vec[i]<<endl;
        }
        if(vec[i]>=a)
        {
            timer = a;
            total += timer - 1;
            timer = 1;
            i++;
            // cout<<"yes";
        }
        // cout<<vec[i]<<endl;
        // cout<<total<<endl;
    }
    // cout << total + 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> vec;
        while (n--)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        solve(a, b, vec);
    }
}