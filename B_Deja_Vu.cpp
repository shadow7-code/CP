#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)    cin >> arr[i];
        vector<ll> x(q);
        for (int i = 0; i < q; i++)    cin >> x[i];

        ll prev = 31;

        for (int i = 0; i < q; i++) {
            if (x[i] >= prev)    continue;
            ll val = 1LL << x[i];
            for (int j = 0; j < n; j++) {
                if (arr[j] % val == 0)
                    arr[j] += val / 2;
            }
            prev = x[i];
        }

        for (int i = 0; i < n; i++)    cout << arr[i] << " ";
        cout << "\n";
    }

    return 0;
}