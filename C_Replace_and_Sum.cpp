#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];

        vector<long long> best(n + 1);

        long long maxi = 0;
        for (int i = n; i >= 1; i--) {
            if (a[i] > maxi) maxi = a[i];
            if (b[i] > maxi) maxi = b[i];
            best[i] = maxi;
        }

        vector<long long> sum(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            sum[i] = sum[i - 1] + best[i];
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            cout << sum[r] - sum[l - 1] << " ";
        }
        cout << "\n";
    }

    return 0;
}
