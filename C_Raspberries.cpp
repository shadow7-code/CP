#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)    cin >> arr[i];

        ll res = LLONG_MAX;
        ll even = 0;

        for (ll i = 0; i < n; i++) {
            if (!(arr[i] & 1 ))     even++;
            if (arr[i] % k == 0)    res = 0;
            res = min(res, (k - arr[i] % k) % k);
        }
        if (k == 4) {
            if (even >= 2)          res = 0;
            else if (even == 1)     res = min(res, 1LL);
            else                    res = min(res, 2LL);
        }
        cout << res << '\n';
    }
    return 0;
}