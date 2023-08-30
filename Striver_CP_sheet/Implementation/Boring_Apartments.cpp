#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int> vec;
    while(t--)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    for(int it:vec)
    {
        int temp=it;
        int last=it%10;
        int i=0;
        while(temp!=0)
        {
            i++;
            temp/=10;
        }
        int press;
        for(int j=1;j<=9;j++)
        {
            if(last==j)
            {
                press=(j-1)*10;
            }
        }
        int tot=(i*i+i)/2;
        int totPress=press+tot;
        cout<<totPress<<endl;
    }
}