#include <bits/stdc++.h>
using namespace std;
//My
//SC: O(n) (reason: In terms of big O notation, O(n) still represents a linear space complexity, regardless of whether you reserve space for a fixed number of elements. The space complexity is determined by the maximum possible usage, not the reserved space.//wrong logic:set of constant size 100 is used because the input specifies the length of string as maximum of 100)
//TC: O(n)(time complexity of accessing elements in an unordered_set is O(1) and there are n elements)
int main()
{
    string s;
    cin>>s;
    unordered_set<char> ch;
    ch.reserve(s.size());  // Reserve space for expected number of distinct characters
    for(char c : s)
    {
        ch.insert(c);
    }
    int n=ch.size();
    if(n%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}