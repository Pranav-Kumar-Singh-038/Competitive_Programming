#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve(){
    int N,b,w,x;
    cin>>N>>b>>w>>x;
    long long q_inverse = mod_pow(6, MOD - 2, MOD);
    cout<<5*q_inverse<<endl;
}

int main(){
int t;
cin>>t;
while(t--){
solve();}}