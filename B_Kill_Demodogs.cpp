#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        //2022 * n(n+1)(4n-1)/6
        ll res = n % MOD;
        res = res * ((n+1) % MOD) % MOD;
        res = res * ((4*n-1) % MOD) % MOD;
        res = res * 337 % MOD;

        cout << res << '\n';
    }
}