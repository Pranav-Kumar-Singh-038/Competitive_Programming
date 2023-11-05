#include <bits/stdc++.h>
using namespace std;

int check_lucky(string x)
{
    int first_half = 0;
    int second_half = 0;

    for (int i = 0; i < (x.size() / 2); i++)
    {
        first_half += (x[i] - '0');
    }
    for (int i = (x.size() / 2); i < x.size(); i++)
    {
        second_half += (x[i] - '0');
    }
    if (first_half == second_half)
    {
        return 1;
    }
    return 0;
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

int main()
{
    solve();
}