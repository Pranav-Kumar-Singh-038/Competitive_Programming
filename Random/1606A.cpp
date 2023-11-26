#include <bits/stdc++.h>
using namespace std;
/*
Let's look at the first and the last characters of s
. Note that if s1=sn
 (where n=|s|
), then AB(s)
 is always equal to BA(s)
.

It can be proved, for example, by induction: if s
 consists of equal characters then AB(s)=BA(s)=0
; if s
 has a structure like abb...ba (or baa...ab) then AB(s)=BA(s)=1
.

Otherwise, there is at least one character si
 in the middle that equal to s1
 and sn
. So we can split string s
 in s[1..i]
 and s[i..n]
. Both these string has AB=BA
 (by induction), so our string s
 also has AB(s)=BA(s)
.

As a result, if s1=sn
 then the answer is 0
, and we print the string untouched. Otherwise, we replace either s1
 or sn
 and get the desired string.

(It also can be proved that if s1≠sn
 then AB(s)≠BA(s)
)
*/
//Solved it, with the helped of tutorial
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
    if(count1==count2)
    {
        cout<<s<<endl;
    }
    else
    {
        s[0]='a';
        s[s.size()-1]='a';
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