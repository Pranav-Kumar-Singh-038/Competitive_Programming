//Optimal
/*
Tutorial:
Suppose we have chosen x and y as the answer, and x is not a divisor of y. 
Since LCM(x,y) belongs to [l,r], we could have chosen x and LCM(x,y) instead.
 So if the answer exists, there also exists an answer where x is a divisor of y.
If 2l>r, then there is no pair (x,y) such that l≤x<y≤r and x|y. Otherwise, x=l and y=2l is the answer.

Translation:
1. **Initial Range**: Given a range (1, 2, 3, 4), you want to find the LCM of two numbers within this range.

2. **Finding LCM**: To find the LCM within the range, you start by looking at multiples of the smallest number, which in this case is 2. For example, if you want to find the LCM of 2 and 3, you consider multiples of 2 (2, 4, 6, 8, ...).

3. **Observation**: You notice that as you look at multiples of 2, the LCM sharply increases, which could be problematic if the range is small.

4. **Strategy**: To avoid the LCM exceeding the range too quickly, you should look for the LCM between numbers that are multiples of each other. For example, instead of finding the LCM of 2 and 3, you find the LCM of 2 and 6, or 3 and 6. In both cases, the LCM is 6, and it doesn't increase beyond the range.

5. **Optimal Start of Range**: To ensure that the numbers and their LCM are within the range, you should look for the LCM near the start of the range. In your example, (4, 8) exceeds the range, while (1, 2) is within the range.

6. **Final Rule**: If you find that 2 times the smallest number (2 * l) exceeds the upper limit of the range (r), it means that even the smallest numbers in the range cannot yield an LCM within the range.

7. **Conclusion**: To summarize, if 2 times the smallest number (2 * l) is greater than the upper limit of the range (r), you should output -1 -1, indicating that it's not possible to find an LCM within the range. Otherwise, you should output the smallest number (l) and its double (2 * l) as the LCM values within the range.*/
//TC: O(1)
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        if (2 * l > r) {
            cout << "-1 -1" << endl;
        } else {
            cout << l << " " << 2 * l << endl;
        }
    }

    return 0;
}


//My
//TC : O(n^2)
// unsigned long long int gcd(unsigned long long int a,unsigned long long int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }//Euclid's Algorithm

// unsigned long long int lcm(unsigned long long int a, unsigned long long int b) {
//     return (a * b) / gcd(a, b);
// }

// int main() {
//     int t;
//     cin >> t;

//     vector<pair<long int, long int>> v;
//     for (int i = 0; i < t; i++) {
//         long int x, y;
//         cin >> x >> y;

//         v.push_back({x, y});
//     }
//     unsigned long long int ans;
//     vector<pair<long int, long int>> v2;
//     for (int i = 0; i < t; i++) {
//         bool found = false;
//         for (unsigned long long int j = v[i].first; j <= v[i].second && !found; j++) {
//             for (unsigned long long int k = j + 1; k <= v[i].second && !found; k++) {
//                 if (lcm(j, k) >= v[i].first && lcm(j, k) <= v[i].second) {
//                     v2.push_back({j, k});
//                     found = true;
//                 }
//             }
//         }
//         if(found==false)
//         {
//         v2.push_back({-1,-1});
//         }
//     }
//     for (auto pair : v2) {
//         cout << pair.first << " " << pair.second << endl;
//     }

//     return 0;
// }
