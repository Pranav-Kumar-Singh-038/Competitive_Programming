#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    long int less=*min_element(vec.begin(),vec.end());
    int count=0;
    int time;
    for(int i=1;i<=(less*t);i=i+1)
    {
      for(int j=0;j<vec.size();j++)
      {
        if(i%vec[j]==0)
        {
            count++;
        }
        if(count==t)
        {
            time=i;
            goto here;
        }
      }
    }
    here:
    cout<<time;
}

#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> vec;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    int time = accumulate(vec.begin(), vec.end(), 1, lcm);

    vector<int> nextMultiple(n);

    int count = 0;
    while (count < t) {
        int minNextMultiple = *min_element(nextMultiple.begin(), nextMultiple.end());
        int nextElementIndex = min_element(nextMultiple.begin(), nextMultiple.end()) - nextMultiple.begin();
        
        if (minNextMultiple > time) {
            count++;
            nextMultiple[nextElementIndex] += vec[nextElementIndex];
        } else {
            time++;
        }
    }

    cout << time << endl;

    return 0;
}

