#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a, vector<int> b)
{
  int min, max;
  if (a.size() % 2 == 0)
  {
    max = a[0];
    for (int i = 1; i < a.size(); i++)
    {
      max ^= a[i];
    }
    int orval = b[0];
    for (int i = 1; i < b.size(); i++)
    {
      orval |= b[i];
    }
    for (int i = 0; i < a.size(); i++)
    {
      a[i] |= orval;
    }
    min = a[0];
    for (int i = 1; i < a.size(); i++)
    {
      min ^= a[i];
    }
  }
  else
  {
    min = a[0];
    for (int i = 1; i < a.size(); i++)
    {
      min ^= a[i];
    }
    int orval = b[0];
    for (int i = 1; i < b.size(); i++)
    {
      orval |= b[i];
    }
    for (int i = 0; i < a.size(); i++)
    {
      a[i] |= orval;
    }
    max = a[0];
    for (int i = 1; i < a.size(); i++)
    {
      max ^= a[i];
    }
  }
  cout << min << " " << max << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      a.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
      int x;
      cin >> x;
      b.push_back(x);
    }
    solve(a, b);
  }
}