#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < (2 * n + 1); i++)
    {
        if (i <= n)
        {
            int lower = n - i - 1;
            int upper = n + i + 1;
            int display = 0;
            for (int j = 0; j < upper; j++)
            {

                if (j > lower && j < upper)
                {
                    if (j != (upper - 1))
                    {
                        cout << display
                             << " ";
                    }
                    else
                    {
                        cout << display;
                    }
                    if (j < n)
                    {
                        display++;
                    }
                    else
                    {
                        display--;
                    }
                }
                else
                {
                    if (j != upper - 1)
                    {
                        cout << " "
                             << " ";
                    }
                }
            }
            cout << endl;
        }
        else
        {
            int display = 0;
            int lower = -1 + (i - n);
            int upper = (2 * n + 1) - (i - n);
            for (int j = 0; j < upper; j++)
            {

                if (j > lower && j < upper)
                {
                    if (j != (upper - 1))
                    {
                        cout << display
                             << " ";
                    }
                    else
                    {
                        cout << display;
                    }
                    if (j < n)
                    {
                        display++;
                    }
                    else
                    {
                        display--;
                    }
                }
                else
                {
                    if (j != upper - 1)
                    {
                        cout << " "
                             << " ";
                    }
                }
            }
            cout << endl;
        }
    }
}

int main()
{

    solve();
}