#include <iostream>
#include <algorithm>

int main()
{
    int arr[3];
    std::cin>>arr[0]>>arr[1]>>arr[2];

    std::sort(&arr[0],&arr[3]);
    std::cout<<(arr[2]-arr[0]);

}

//Time complexity: O(n.log(n)) both avg and worst case
//space complexity: O(n) for the call stack when the naive Quicksort algorithm is used.