#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    std::cin>>t;
    std::vector<int> v;
    for(int i=0;i<t;i++)
    {
        int x;
        std::cin>>x;
        v.push_back(x);
    }
    
    vector<int> vec[t];
    

    for(int i=0;i<t;i++)
    {
      int temp=v[i];
      int last;
      int value;
      double power;
      int p=0;
      while(temp!=0)
      {
        last=(temp%10);
        power=pow(10,p);
        value=last*power;
        temp=temp/10;
        vec[i].push_back(value);
        p++;
      }
      reverse(vec[i].begin(),vec[i].end());//O(n)
      vec[i].erase(remove(vec[i].begin(), vec[i].end(), 0),vec[i].end());//O(n)    //O(n+m) which is O(kn) which is O(n)   //where where N is the number of elements in the range vec[i], and M is the number of elements that are equal to 0 in that range.
    }
    
    for(int i=0;i<t;i++)
    {
        cout<<vec[i].size()<<endl;
        for(int vale:vec[i])
        {
            cout<<vale<<" ";
        }
        cout<<endl;
    }

}
// the overall time complexity of this code is O(n*size of num) 
//  time complexity: O(t * log10(x)).
// roughly means the same as above
// space complexity: O(n^2)
//space complexity: O(t * k).
//k is the average number of digits in the numbers.

