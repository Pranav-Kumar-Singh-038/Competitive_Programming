#include <bits/stdc++.h>
using namespace std;

long int gcd(long int a,long int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long int lcm(long int a, long int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int t;
    cin >> t;

    vector<pair<long int, long int>> v;
    for (int i = 0; i < t; i++) {
        long int x, y;
        cin >> x >> y;

        v.push_back({x, y});
    }
    long int ans;
    vector<pair<long int, long int>> v2;
    // vector<long int> v3;
    for (int i = 0; i < t; i++) {
        bool found = false;
        for (long int j = v[i].first; j <= v[i].second && !found; j++) {
            for (long int k = j + 1; k <= v[i].second && !found; k++) {
                if (lcm(j, k) >= v[i].first && lcm(j, k) <= v[i].second) {
                    v2.push_back({j, k});
                    // v3.push_back(lcm(j,k));
                    int ans=lcm(j,k);
                    found = true;
                }
            }
        }
        if(found==false)
        {
        v2.push_back({-1,-1});
        }
    }

    // Print the pairs in v2
    for (auto pair : v2) {
        cout << pair.first << " " << pair.second << endl;
    }
    cout<<ans;

    return 0;
}
