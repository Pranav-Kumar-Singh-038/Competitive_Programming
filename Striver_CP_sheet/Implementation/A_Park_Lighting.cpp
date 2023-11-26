#include <bits/stdc++.h>
using namespace std;
/*Note that if at least one of the sides is even, the square can be divided into 
pairs of neighbors and the answer is nm2.

If both sides are odd, we can first light up a (n−1)×m
 part of the park. Then we'll still have the part m×1. We can light it up with m+12
 lanterns. Then the total number of the lanterns is (n−1)⋅m2+m+12=nm−m+m+12=nm+12.

Note that both cases can be combined into one formula: ⌊nm+12⌋.

The overall compexity is O(1) per test.*/
//I counted total cells and found that by greedy we must fill first lights which occupy 2 cells and at last add which remain if they remain
int main()
{
    int t;
    cin>>t;
    vector<vector<int>> vec;
    while(t--)
    {
      int a,b;
      cin>>a>>b;
      vec.push_back({a,b});
    }
    for(auto it:vec)
    {
        int totCell=it[0]*it[1];
        int count=totCell/2+totCell%2;
        cout<<count<<endl;
    }
}