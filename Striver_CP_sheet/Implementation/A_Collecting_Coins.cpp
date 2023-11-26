// #include <bits/stdc++.h>
// using namespace std;

//My
//Time limit exceeded
// bool isEqual(vector<int> nums)
// {
//     bool ans=true;
//     for(int i=1;i<nums.size()-1;i++)
//     {
//         if(nums[i-1]!=nums[i])
//         {
//             ans=false;
//             break;
//         }
//     }
//     return ans;
// }


#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, a, b, c, n, s, maxt;
  cin>>t;
  while(t>0){
    t--;
    cin>>a>>b>>c>>n;
    maxt = max(a, max(b, c));
    s = a+ b+ c+ n;
    if(s%3==0 && s/3 >= maxt) cout<<"YES\n";
    else cout<<"NO\n";
  }
  return 0;
}

    // int t;
    // cin>>t;
    // vector<vector<int>> vec;
    // while(t--)
    // {
    //     int a,b,c,d;
    //     cin>>a>>b>>c>>d;
    //     vec.push_back({a,b,c,d});
    // }
    // for(auto it:vec)
    // {
    //     int a=it[0];
    //     int b=it[1];
    //     int c=it[2];
    //     int n=it[3];
    //     int Max=max({it[0],it[1],it[2]});
    //       bool flag=true;
    //       while((it[0]!=it[1] || it[1]!=it[2] ||it[2]!=it[0]) && flag )
    //       {
    //        for(int i=0;i<3;i++)
    //         {
    //          if(it[i]<Max && flag)
    //           {
    //             it[i]++;
    //             n--;
    //           }
    //          if(n<=0)
    //           {
    //             flag=false;
    //           }
    //         }
    //       }
    //     if(isEqual(it) && n%3==0)
    //       {
    //         cout<<"YES"<<endl;
    //       }
    //       else
    //       {
    //         cout<<"NO"<<endl;
    //       }

