#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& vec, int x) {
    int mx = *max_element(vec.begin(), vec.end());
    int ht = 1;
    vector<int> m(mx + 2, 0);

    for (auto it : vec) {
        m[it]++;
    }

    int i = 1;
    int n = vec.size(); 

    while (x > 0 && i < mx) { 
        if (m[i] <= x) {
            ht++;
            m[i + 1] += m[i];
            x -= m[i];
            i++;
        }
        else {
            break;
        }
    }

    if (x != 0) {
        if (x % n == 0) { 
            ht += x / n;
        }
        else {
            int dump = x % n;
            x -= dump;
            ht += x / n;
        }
    }

    cout << ht << endl;
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