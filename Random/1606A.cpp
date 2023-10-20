#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string ab = "ab";
    string ba = "ba";

    int count1 = 0;
    size_t pos = 0;
    vector<int> arr1;
    vector<int> arr2;

    while ((pos = s.find(ab, pos)) != std::string::npos)
    {
        count1++;
        arr1.push_back(pos);
        pos += ab.length();
    }
    int count2 = 0;
    pos = 0;
    while ((pos = s.find(ba, pos)) != std::string::npos)
    {
        count2++;
        arr2.push_back(pos);
        pos += ba.length();
    }
   // cout << count1 << " " << count2 << endl;
    if(count1==count2)
    {
        cout<<s<<endl;
    }
    else if(count1>count2)
    {
        while(count1!=count2)
        {
            pos=s.find(ab);
            s[pos]='b';
            count1--;
        }
        cout<<s<<endl;
    }
    else{
        while(count2!=count1)
        {
            pos=s.find(ba);
            s[pos]='a';
            count2--;
        }
        cout<<s<<endl;
    }
    return;
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