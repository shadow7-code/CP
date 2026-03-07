#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        long long x = s - b * k;

        if (x < 0 || x > n * (k - 1)) {
            cout << -1 << "\n";
            continue;
        }
        vector<long long> a(n, 0);

        a[0] = b * k;
        x = s - a[0];
        for (int i = 0; i < n && x > 0; i++) {
            long long add = min(x, k - 1);
            a[i] += add;
            x -= add;
        }
        for (long long x : a)   cout << x << " ";
        cout << "\n";
    }
}