#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> vec)
{
  int five = 0;
  int zero = 0;
  for (auto it : vec)
  {
    if (it == 5)
    {
      five++;
    }
    else
    {
      zero++;
    }
  }
  if (zero == 0)
  {
    cout << "-1";
  }
  else
  {
    int n = five - five % 9;
    for (int i = 0; i < n; i++)
    {
      cout << "5";
    }
    if (n == 0)
    {
      cout << "0";
    }
    else
    {
      for (int i = 0; i < zero; i++)
      {
        cout << "0";
      }
    }
  }
}

int main()
{
  int n;
  cin >> n;
  vector<int> vec;
  while (n--)
  {
    int x;
    cin >> x;
    vec.push_back(x);
  }
  solve(vec);
}