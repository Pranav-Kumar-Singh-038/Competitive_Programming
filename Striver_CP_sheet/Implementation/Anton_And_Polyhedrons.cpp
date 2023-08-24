#include<iostream>
#include<vector>
#include<string.h>
//Time complexity : O(n*avg length of strings) (avg length of string was 9.6) finally time complexity O(n) 
//space complexity: O(n)
int main()
{
    int n;
    std::cin>>n;
  
    std::vector<std::string> vec;
    for(int i=0;i<n;i++)
    {
        std::string str;
        std::cin>>str;
        vec.push_back(str);
    }
    int iCount=0;
    int tCount=0;
    int cCount=0;
    int oCount=0;
    int dCount=0;
    for(std::string i:vec)
    {
        char temp=i[0];
        if(temp=='I')
        {
         iCount++;
        }
        else if(temp=='T')
        {
         tCount++;
        }
        else if(temp=='C')
        {
         cCount++;
        }
        else if(temp=='O')
        {
         oCount++;
        }
        else if(temp=='D')
        {
         dCount++;
        }
    }
    int faces=iCount*20+tCount*4+cCount*6+oCount*8+dCount*12;
    std::cout<<faces;
}