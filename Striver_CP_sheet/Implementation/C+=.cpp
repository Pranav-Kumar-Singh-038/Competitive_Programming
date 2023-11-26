#include <iostream>
#include <vector>
using namespace std;
//TC O(t * log2(n))
// SC O(t)
int main() {
    int t;
    cin >> t;

    vector<int> vec;

    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;

        int i = 0;
            while (a <= n && b <= n) {
                if (a < b) {//the if statements are used to ensure that the values of a and b are as close as possible and the values double with each turn so as to reach n faster
                    a += b;
                } else {
                    b += a;
                }
                i++;
            }
            vec.push_back(i);
    }

    for (auto i : vec) {
        cout << i << endl;
    }

    return 0;
}
