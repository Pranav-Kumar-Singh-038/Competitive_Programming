#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5][5];
    int x,y;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j])
            {
                x=i;
                y=j;
            }
        }
    }

    x=abs(x-2);
    y=abs(y-2);
    cout<<x+y;
}

//Time complexity: finally=O(1);   initially= O(n^2) two loops were used for finding the location of 1
//Space complexity: O(1) only extra two variables x and y were used;