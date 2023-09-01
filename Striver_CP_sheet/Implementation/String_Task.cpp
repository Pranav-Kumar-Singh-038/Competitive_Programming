#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='a' || str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u' || str[i]=='y' )
        {
            str[i]='0';
        }
    } 
    str.erase(remove(str.begin(), str.end(), '0'),str.end());
    vector<char> charr;
    for(char ch: str)
    {
        charr.push_back('.');
        charr.push_back(ch);
    }
    for(char ch: charr)
    {
        cout<<ch;
    }
}