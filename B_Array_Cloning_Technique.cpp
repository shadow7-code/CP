#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast

    ll t; 
    cin >> t;
    while (t--) {
        ll n; 
        cin >> n;

        vector<ll> arr(n);
        for (ll &x : arr) cin >> x;

        map<ll,ll> mappy;
        for (ll x : arr) mappy[x]++;

        ll maxi = 0;
        for (auto &p : mappy) maxi = max(maxi, p.second);

        ll res = 0;
        while (maxi < n) {
            res++; 
            if (maxi * 2 <= n) {
                res += maxi;
                maxi *= 2;
            } else {
                res += n - maxi;
                maxi = n;
            }
        }

        cout << res << "\n";
    }
    return 0;
}
