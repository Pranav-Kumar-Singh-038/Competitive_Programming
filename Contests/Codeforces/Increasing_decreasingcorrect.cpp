#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int x, y, n;
        cin >> x >> y >> n;
        vector<int> b;
 
        int j = 1;
        int m = n;
        while (n--)
        {

            if (y >=x)
            {
                b.push_back(y);
            }
            y = y - j;
            j = j+1;
        }
        sort(b.begin(), b.end());
        b[0] = x;
        
        if (b.size() == m)
        {
            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
 
        else
        {
            cout << "-1\n";
        }
    }
 
    return 0;
}