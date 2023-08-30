#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin>>n;
    int i=1;
    int gap=2;
    int floor=0;
    int block=i;
    while(n>=i)
    {
        n=n-i;
        i+=gap;
        gap++;
        floor++;
        block+=i;
       // //cout<<"Block:"<<block<<" "<<"left:"<<n<<" "<<"floorsBuilt"<<floor<<endl;
    }
    cout<<floor;
    }