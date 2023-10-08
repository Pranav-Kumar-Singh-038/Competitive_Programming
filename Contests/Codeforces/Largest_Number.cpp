#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, dig, num;
    cin>>n>>dig>>num;
    string nums=to_string(num);
    int count=0;
    for(int i=0;i<nums.size();i++)
    {
        int x=int(nums[i])-48;
        if(x<=dig && count==0)
        {
           cout<<dig;
           cout<<nums[i];
           count++;
        }
        else
        {
            cout<<nums[i];
        }
    }
    if(count==0)
    {
        cout<<dig;
    }
    return 0;
}
