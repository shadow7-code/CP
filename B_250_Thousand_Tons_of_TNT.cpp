#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n), pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pref[i + 1] = pref[i] + a[i];
        }
        ll res = 0;
        for (int k = 1; k <= n; k++) {
            if (n % k != 0) continue;

            ll maxi = 0, mini = LLONG_MAX;
            for (int i = 0; i < n; i += k) {
                ll sum = pref[i + k] - pref[i];
                maxi = max(maxi, sum);
                mini = min(mini, sum);
            }
            res = max(res, maxi - mini);
        }
        cout << res << "\n";
    }
    return 0;
}