//My first correct question on a codeforces contest

/*The generateSubsequences function is designed to explore all possible combinations of included and skipped digits in the input number. It does this through a process of recursive function calls.

At each step, the function has two options:

Include the current digit in the subsequence.
Skip the current digit and move to the next digit.
The recursive nature of the function allows it to explore both of these options for each digit in the input number. As it progresses through the digits, it generates various subsequences by including or skipping digits.

The base case for the recursion is reached when the index becomes equal to the length of the input number. This means that all digits have been considered, and the function can check whether the current subsequence meets the criteria for being a valid prime subsequence.

If the criteria are met (subsequence length between 2 and 8 and being a prime number), the subsequence is printed.

The found flag is used to stop further exploration if a valid prime subsequence is found for a given input number. Once a valid subsequence is found, the function returns early from the recursive calls, skipping any further exploration for that input.

Through these recursive calls and explorations, the function generates all possible subsequences of the input number's digits and checks their validity according to the criteria.

By systematically exploring all digit inclusion and skipping options, the code covers all combinations of digits in the subsequences, effectively generating all possible subsequences of the input number.
*/

// bool isprime(int n) {
//     if (n == 1) return false;
//     for (int i = 2; i < n; i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }
 
// void solve()
// {
//     string s; cin >> s;
//     bool flag = false;
//     for (int i = 0; i < 9; i++) {
//         int x = s[i] - '0';
//         for (int j = i + 1; j < 9; j++) {
//             int y = s[j] - '0';
//             if (isprime(x * 10 + y)) {
//                 flag = true;
//                 cout << x * 10 + y << "\n";
//                 break;
//             }
 
//         }
//         if (flag == true) break;
//     }
//     if (flag == false) cout << "-1\n";
 
// }


#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

void findSub(const string& number, string current, int index,bool& found) 
{
    if(found)
    {
        return;
    }
    if (index == number.length()) {
        if (current.length() >= 2 && current.length() <9 && isPrime(stoi(current)) ) {
            cout << current << endl;
            found=true;
        }
        return;
    }

    findSub(number, current + number[index], index + 1,found);

    findSub(number, current, index + 1,found);
}

void printSub(int n) {
    string n_str = to_string(n);
    bool found=false;
    findSub(n_str, "", 0,found);
}



int main()
{
    int t;
    cin>>t;
    vector<string> str;
    while(t--)
    {
        string x;
        cin>>x;
        str.push_back(x);
    }
    for(auto it:str)
    {
        long long int num=stoi(it);
        printSub(num);
    }
}