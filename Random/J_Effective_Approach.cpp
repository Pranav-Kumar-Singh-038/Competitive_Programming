#include <bits/stdc++.h>
using namespace std;

// void solve(vector<int> vec, vector<int> queries)
// {
//     unordered_map<int, int> index_map;
//     int n = vec.size();

//     for (int i = 0; i < n; ++i) {
//         index_map[vec[i]] = i + 1;
//     }

//     int a = 0, b = 0;
//     for (auto it : queries) {
//         if (index_map.find(it) != index_map.end()) {
//             a += index_map[it];
//             b += n - index_map[it] + 1;
//         }
//     }

//     cout << a << " " << b << endl;
// }

void solve(std::vector<int> vec, std::vector<int> queries)
{
    int a = 0, b = 0;
    int n = vec.size();
    for (auto it : queries)
    {
        int i = 0;
        while (true)
        {
            if (vec[i] == it)
            {
                a += i + 1;
                break;
            }
            i++;
        }
        int j = n - 1;
        while (true)
        {
            if (vec[j] == it)
            {
                b += n - j;
                break;
            }
            j--;
        }
    }
    std::cout << a << " " << b << std::endl;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> vec;
    while (n--)
    {
        int x;
        std::cin >> x;
        vec.push_back(x);
    }
    int m;
    std::cin >> m;
    std::vector<int> queries;
    while (m--)
    {
        int x;
        std::cin >> x;
        queries.push_back(x);
    }
    solve(vec, queries);
}