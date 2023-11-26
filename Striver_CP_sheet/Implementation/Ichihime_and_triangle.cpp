#include <bits/stdc++.h>
using namespace std;
//Optimal
//TC: O(1)
int main()
{
    int t;
    cin >> t;
    vector<vector<int>> vec;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vec.push_back({a, b, c, d});
    }
    for (int i = 0; i < vec.size(); i++) 
    {
        cout<<vec[i][1]<<" "<<vec[i][2]<<" "<<vec[i][2]<<endl;
    }   
}


//Mine
//TC: O(n^3)
// bool isTriangle(int x, int y, int z)
// {
//     return (x + y > z && y + z > x && x + z > y);
// }

// void findTriangleSides(const vector<int>& ranges) {
//     int a = ranges[0];
//     int b = ranges[1];
//     int c = ranges[2];
//     int d = ranges[3];
    
//     for (int x = a; x <= b; x++) {
//         for (int y = b; y <= c; y++) {
//             for (int z = c; z <= d; z++) {
//                 if (isTriangle(x, y, z)) {
//                     cout << x << " " << y << " " << z << endl;
//                     return;
//                 }
//             }
//         }
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;
//     vector<vector<int>> vec;

//     while (t--)
//     {
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;
//         vec.push_back({a, b, c, d});
//     }

//     for (int i = 0; i < vec.size(); i++) 
//     {
//         findTriangleSides(vec[i]);
//     }   

//     return 0;
// }
