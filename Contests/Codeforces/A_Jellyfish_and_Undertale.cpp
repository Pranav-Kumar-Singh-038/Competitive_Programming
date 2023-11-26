#include <bits/stdc++.h>
using namespace std;
 
void solve(long long int a, long long int b, vector<long long int> vec)
{
    sort(vec.begin(), vec.end());
    long long int totime = b;
    long long int sum = totime - 1;
    long long int i = 0;
    while (i < vec.size())
    {
        if (totime == 1)
        {
            while(totime<a && i<vec.size())
            {
                int fin=totime+vec[i];
                if(fin>a || i==vec.size())
                {
                    break;
                }
                else{
                    totime+=vec[i];
                    i++;
                }
            }
            if(totime==1 && i!=vec.size())
            {
                totime=a;
                i++;
            }
            sum += totime - 1;
        }
        else
        {
            totime=1;
        }
    }
    cout << sum+1 << endl;
}
 
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, n;
        cin >> a >> b >> n;
        vector<long long int> vec;
        while (n--)
        {
            long long int x;
            cin >> x;
            vec.push_back(x);
        }
        solve(a, b, vec);
    }
}
