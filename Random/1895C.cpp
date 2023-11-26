#include <bits/stdc++.h>
using namespace std;

int check_lucky(const string &x) {
    int first_half_sum = 0;
    int second_half_sum = 0;
    int length = x.size();
    
    for (int i = 0; i < length; i++) {
        if (i < length / 2) {
            first_half_sum += x[i] - '0';
        } else {
            second_half_sum += x[i] - '0';
        }
    }

    return (first_half_sum == second_half_sum) ? 1 : 0;
}


void solve()
{
    int n;
    cin >> n;
    vector<string> ticketpieces;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        ticketpieces.push_back(x);
    }
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {

        string x;
        for (int j = i + 1; j < n; j++)
        {
            if ((ticketpieces[i].size() % 2 == 0 && ticketpieces[j].size() % 2 == 0) || (ticketpieces[i].size() % 2 != 0 && ticketpieces[j].size() % 2 != 0))
            {
                x = ticketpieces[i] + ticketpieces[j];
                count += check_lucky(x);
                x = ticketpieces[j] + ticketpieces[i];
                count += check_lucky(x);
            }
        }
    }
    cout << count + n;
}

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<string> ticketpieces;

//     for (int i = 0; i < n; i++)
//     {
//         string x;
//         cin >> x;
//         ticketpieces.push_back(x);
//     }
//     int count = 0;
//     vector<string> possible;
//     for (int i = 0; i < n - 1; i++)
//     {

//         string x;
//         for (int j = i + 1; j < n; j++)
//         {
//             if ((ticketpieces[i].size() % 2 == 0 && ticketpieces[j].size() % 2 == 0) || (ticketpieces[i].size() % 2 != 0 && ticketpieces[j].size() % 2 != 0))
//             {
//                 x = ticketpieces[i] + ticketpieces[j];
//                 possible.push_back(x);
//                 // count += check_lucky(x);
//                 x = ticketpieces[j] + ticketpieces[i];
//                 // count += check_lucky(x);
//                 possible.push_back(x);
//             }
//         }
//     }
//     for (auto it : possible)
//     {
//         count += check_lucky(it);
//     }
//     cout << count + n;
// }

int main()
{
    solve();
}