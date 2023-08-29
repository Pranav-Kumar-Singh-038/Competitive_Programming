#include <bits/stdc++.h>
using namespace std;
//TC O(1) (length of vector is 5)
//SC O(1)
int main()
{
    string card;
    cin>>card;
    vector<string> hand(5);
    for(int i=0;i<5;i++)
    {
        string x;
        cin>>x;
        hand.push_back(x);
    }
    int count=0;
    for(string cd:hand)
    {
      if(cd[0]==card[0] || cd [1]==card[1])
      {
        count++;
      }
    }
    if(count)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}