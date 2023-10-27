#include <bits/stdc++.h>
using namespace std;

//Optimal
//To always achieve 2, we can use a greedy algorithm: always merge two
//  maximum numbers. During the first step, we merge n and n−1, get n; 
//  then we merge n and n−2, get n−1; then we merge n−1 and n−3, get n−2; 
//  and it's easy to see that the last operation is merging 3 and 1, so 
//  the result is 2.

// inline void solve() {
// 	multiset<int> was;
// 	for (int i = 1; i <= n; i++) {
// 		was.insert(i);
// 	}
// 	vector<pair<int, int> > ans;
// 	for (int i = 0; i < n - 1; i++) {
// 		auto it = was.end();
// 		it--;
// 		int a = *it;
// 		was.erase(it);
// 		it = was.end();
// 		it--;
// 		int b = *it;
// 		was.erase(it);
// 		was.insert((a + b + 1) / 2);
// 		ans.pb(mp(a, b));
// 	}
// 	cout << *was.begin() << endl;
// 	for (int i = 0; i < sz(ans); i++) {
// 		cout << ans[i].ft << ' ' << ans[i].sc << endl;
// 	}	
// }

// My solution
// Found a repeating pattern
// TC: O(n)
// SC: O(1)
void solve()
{
    int n;
    cin >> n;
    cout << 2 << endl;
    int count = n - 1;
    if (n == 2)
    {
        cout << 1 << " " << 2 << endl;
    }
    else
    {
        cout << n - 2 << " " << n << endl;
        cout << n - 1 << " " << n - 1 << endl;
        count -= 2;
        int i = 0;
        while (count)
        {
            cout << n - 3 - i << " " << n - 1 - i << endl;
            i++;
            count--;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}