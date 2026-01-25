#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)     cin >> a[i];
        for (int i = 0; i < n; i++)     cin >> b[i];

        sort(a.begin(), a.end());

        vector<long long> monstersum(n + 1, 0);
        for (int i = 0; i < n; i++) {
            monstersum[i + 1] = monstersum[i] + b[i];
        }

        long long res = 0;

        for (int i = 0; i < n; i++) {
            if (i > 0 && a[i] == a[i - 1])  continue;

            long long x = a[i];
            long long count = n - i;

            int levels = upper_bound(monstersum.begin(), monstersum.end(), count) - monstersum.begin() - 1;

            res = max(res, x * levels);
        }

        cout << res << "\n";
    }

    return 0;
}
